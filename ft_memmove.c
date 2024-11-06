/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:19 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/06 16:20:03 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (d > s)
	{
		d += size;
		s += size;
		while (size-- > 0)
			*(--d) = *(--s);
	}
	else
	{
		while (size-- > 0)
			*d++ = *s++;
	}
	return (dest);
}
// int main()
// {
//     int d[] = {};
//     int s[] = {1, 2, 3, 4, 5};
//     ft_memmove(d, s, 3 *sizeof(int));
//     for(int i = 0; i < 3; i++)
//     {
//         printf("%d", d[i]);
//     }
// }