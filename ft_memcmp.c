/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:07 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/09 12:43:24 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
// int main()
// {
//     // int x = 25479;
// 	// //  0|0|01100011|10000111 => 25479
// 	// //  0|0|00000000|00011001 => 25
//     // int y = 25;
//     // printf("%d", ft_memcmp(&x, &y, 4));

// 	int a[] = {0xFF, 0xFF, 0xFF};
// 	int b[] = {0xFF, 0x00};
// 	printf("%d\n", ft_memcmp(a, b, 5));
// }