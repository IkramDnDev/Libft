/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:55 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 18:54:10 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*copy_word(const char *start, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_split(char **result, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	fill_words(char **result, const char *s, char c)
{
	const char	*start;
	size_t		len;
	int			index;

	index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = s;
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			result[index] = copy_word(start, len);
			if (!result[index])
			{
				free_split(result, index);
				return (-1);
			}
			index++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (fill_words(result, s, c) == -1)
		return (NULL);
	result[word_count] = NULL;
	return (result);
}
// int main()
// {
//     char tab[] = "lorem ipsum dolor sit amet";
//     char c = ' ';
//     char **words = ft_split(tab, c);
//     int i = 0;
//     while (words[i])
//     {
//         printf("%s\n", words[i]);
//         free(words[i]);
//         i++;
//     }
//     free(words);
//     return 0;
// }
