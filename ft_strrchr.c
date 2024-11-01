/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:32:05 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 15:54:43 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    const char *last_occurence; 
    while (*str)
    {
        if (*str == (char)c)
            last_occurence = str;
        str++;
    }
    if (c == '\0')
        return ((char *)str);
    return ((char *)last_occurence);
}

// int main()
// {
//     const char *str = "ikram dahhan";
//     char c = 'a';
//     char *result = ft_strrchr(str, c);

//     printf("the last occurence of carachter a is : %ld", result - str);
// }