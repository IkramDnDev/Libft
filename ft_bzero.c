/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:26:53 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 15:57:22 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr = 0;
		ptr++;
	}
	return (s);
}
// int main()
// {
//     char buffer[5] = "ikram";

//     ft_memset(buffer, sizeof(buffer));
//     size_t i = 0;
//     while (i < sizeof(buffer))
//     {
//         printf("%02X ", (unsigned char)buffer[i]);
//         i++;
//     }
// }