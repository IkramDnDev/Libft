/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:32:05 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/06 18:31:30 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    const char *last_occurence = NULL;
    if (c == '\0')
    {
        while(*str)
            str++;
        return ((char *)str);
    }
    while (*str)
    {
        if (*str == (char)c)
            last_occurence = str;
        str++;
    }   
    return ((char *)last_occurence);
}
// int main()
// {
//     const char *str = "";
//     char c = '\0';
//     char *result = ft_strrchr(str, c);

//     printf("%s", result);
// }