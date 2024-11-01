/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:12 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 15:03:32 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (n == 0 || src == dest)
		return (dest);
	if (!src)
		return (NULL);
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
//     int dest[6];
//     int src[] = {1, 2, 3};
//     size_t n = sizeof(src);
//     ft_memcpy(dest, src, n);
//     size_t i = 0;
//     while (i < sizeof(src) / sizeof(src[0]))
//     {
//         printf("%d ", dest[i]);
//         i++;
//     }
// }
