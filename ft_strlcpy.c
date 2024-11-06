/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:30:45 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/06 16:36:47 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    const char *s;
    size_t src_len;
    size_t i;

    s = src;
    src_len = 0;
    i = 0;
    while (s[src_len])
        src_len++;
    
    if (size == 0)
        return (src_len);

    while (i < src_len && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (src_len);
}
// int main()
// {
//     char *src = "ikram";
//     char dest[2];
//     size_t size = 0;

//     printf("%zu\n", ft_strlcpy(dest, src, 6));
//     // printf("%zu\n", strlcpy(dest, src, 6));
//     printf("%s", dest);
// }