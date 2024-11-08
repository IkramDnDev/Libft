/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:31:50 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 18:18:14 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, int n)
{
	if (n < 0)
		return (-1);
	while (*str1 && *str2 && n > 0)
	{
		if (*str1 != *str2)
			return ((unsigned char) *str1 - (unsigned char) *str2);
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
// int main()
// {
//     char *str1 = "1234";
//     char *str2 = "1235";

//     printf("%d\n", ft_strncmp(str1, str2, -1));
//     printf("%d", strncmp(str1, str2, -1));
// }