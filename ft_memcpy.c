/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:12 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/09 21:37:24 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (src == dest)
		return (dest);
	d = dest;
	s = src;
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
// int main()
// {
//     // int dest[6];
//     // int src[] = {-128, 2, 3};
//     // ft_memcpy(dest, src, sizeof(src));
//     // size_t i = 0;
//     // while (i < 3)
//     // {
//     //     printf("%d\n", dest[i]);
//     //     i++;
//     // }
// 	// int dest;
// 	// int src = 2564637;
// 	// // 00000000|00100111|00100010|00011101
// 	// ft_memcpy(&dest, &src, 5);
// 	// printf("%d", dest);

// 	char src[] = "ikram";
// 	char dest[6];
// 	ft_memcpy(dest, src, 6);
// 	// dest[5] = '\0';
// 	printf("dest : %s\n", dest);
// }
