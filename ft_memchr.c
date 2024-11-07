/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:01 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 21:53:30 by idahhan          ###   ########.fr       */
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
//         printf("%d", * result);
//     else
//         printf("caractere non toruvee");
// }
