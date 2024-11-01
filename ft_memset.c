/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:26 by idahhan           #+#    #+#             */
/*   Updated: 2024/10/31 21:44:52 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = s;
	value = (unsigned char) c;
	while (n-- > 0)
	{
		*ptr = value;
		ptr++;
	}
	return (s);
}
// int main()
// {
//     char buffer[5];
//     unsigned char value = "0xAB";

//     ft_memset(buffer, value, sizeof(buffer));
//     size_t i = 0;
//     while (i < sizeof(buffer))
//     {
//         printf("%02X ", (unsigned char)buffer[i]);
//         i++;
//     }
// }
