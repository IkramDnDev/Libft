/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:01 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/09 21:39:07 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		value;

	ptr = (unsigned char *)s;
	value = (unsigned char )c;
	while (n-- > 0)
	{
		if (*ptr == value)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
// int main()
// {
//     int x = 76564;
// 	int j = 1;
//     int *result = ft_memchr(&x, j, 4);
//     if(result)
// 	{
//         printf("%d\n", *result);
// 		int index = (unsigned char *)result - (unsigned char *)&x
// 		printf("l'indice est : %d", index);
// 	}
//     else
//         printf("caractere non toruvee");

// 	// 0|0|0|10010 \  0|0|0|11111111 \ 110100

// 	// 11111111

// 	// int data[] = {0x12, 0xFF, 0x34, 0xAB};
// 	// int *result = ft_memchr(data, 0xFF, 5);
// 	// printf("%d\n", *result);	
// }