/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:31:59 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 15:54:48 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *subs, size_t n)
{
    size_t  i;
    
    i = 0;
    if (subs[i] == '\0')
        return ((char *)str);
    while (*str && n-- > 0)
    {
        if (*str == *subs)
        {
            while(str[i] && subs[i] && str[i] == subs[i] && i < n)
                i++;        
        if(subs[i] == '\0')
            return ((char *)str);
        }
        str++;
    }
    return (NULL);    
}

// int main() {
//     char *str = "lorem ipsum dolor sit amet";
//     char *subs = "";
//     char *result = ft_strnstr(str, subs, 35);
//     printf("%s\n", result);
//     return 0;
// }