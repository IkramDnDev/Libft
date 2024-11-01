/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:30:45 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 15:55:08 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, char *src, size_t size)
{
    char *s;
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
//     char dest[4];
//     size_t size = 0;

//     printf("%zu\n", ft_strlcpy(dest, src, size));
//     printf("%s", dest);
// }