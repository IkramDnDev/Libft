/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:31:59 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 19:02:24 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *subs, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*subs == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		if (str[i] == subs[0])
		{
			j = 0;
			while (str[i + j] && subs[j]
				&& str[i + j] == subs[j] && (i + j) < n)
				j++;
			if (subs[j] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
// int main() {
//     char *str = "lorem ipsum dolor sit amet";
//     char *subs = "ipsum";
//     char *result = ft_strnstr(str, subs, 15);
//     printf("%s\n", result);
//     return 0;
// }
