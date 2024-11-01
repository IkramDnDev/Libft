/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:07 by idahhan           #+#    #+#             */
/*   Updated: 2024/10/31 21:45:56 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *ptr1, void *ptr2, size_t n)
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
//     char p1[] = "ikram";
//     char p2[] = "ikd";
//     printf("%d", ft_memcmp(p1, p2, 4));

// }
