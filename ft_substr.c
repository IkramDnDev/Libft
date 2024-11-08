/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:32:17 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/08 15:21:29 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*c;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (0);
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	c = (char *)malloc((len + 1) * sizeof(char));
	if (!c)
		return (0);
	while (i < len)
	{
		c[i] = s[start + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
// int main()
// {
//     char s[] = "ikram";
//     printf("---> %s\n",ft_substr(s, 0, 4));
//     printf("---> %s\n",ft_substr(s, 4, 4));
//     printf("---> %s\n",ft_substr(s, 8, 5));
//     printf("---> %s\n",ft_substr(s, 0, 0));
// }