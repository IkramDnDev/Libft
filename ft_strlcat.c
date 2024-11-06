/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:30:33 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/06 16:36:34 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
    const char      *s;
    char            *d;
    unsigned int    n;
    int         dest_len;
    
    s = src;
    d = dest;
    n = size;
    dest_len = 0;
    while (n-- > 0 && *d)
        d++;
    dest_len = d - dest;
    n = size - dest_len;

    if (n == 0)
        return (dest_len + ft_strlen(src));

    while (n-- > 1 && *s)
        *d++ = *s++;
        
    *d = '\0';

    return (dest_len + ft_strlen(src));
    
}
// int main()
// {
//     char dest[20] = "ikram";
//     char *src = "dahhan";
//     unsigned int size = 9;

//     printf("%d\n", ft_strlcat(dest, src, size));
//     printf("%s", dest);
// }