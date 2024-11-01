/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:01 by idahhan           #+#    #+#             */
/*   Updated: 2024/10/31 21:28:09 by idahhan          ###   ########.fr       */
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
//     char s[] = "ikram";
//     char c = 'r';
//     void *result = ft_memchr(s, c, sizeof(s));
//     if(result)
//         printf("%s", (char *)result);
//     else
//         printf("caractere non toruvee");
// }
