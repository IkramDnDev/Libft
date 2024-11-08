/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:26 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 19:49:42 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = s;
	value = (unsigned char)c;
	while (n-- > 0)
	{
		*ptr = value;
		ptr++;
	}
	return (s);
}
// int main()
// {
//    	// char  buffer[5];
//     // int value = 1337;
// 	// int i = 4;
//     // ft_memset(buffer + i, '\0', 1);
// 	// char nbr;
// 	// while (value > 0 && i > 0)
// 	// {
// 	// 	i--;
// 	// 	nbr = (value % 10) + '0';
// 	// 	ft_memset(buffer + i, nbr, 1);
// 	// 	value/= 10;
// 	// }
//     // int j = 0;
//     // while (j < sizeof(buffer))
//     // {
//     //     printf("%c", buffer[j]);
//     //     j++;
//     // }
// 	char buffer[3];
// 	unsigned int value = 0xAB; 
// 	ft_memset(buffer, value, sizeof(buffer));
// 	printf("%d", buffer[0]);
// }