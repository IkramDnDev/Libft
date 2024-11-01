/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:30:21 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 15:55:18 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  total_len;
    int     i;
    int     j;
    char    *totat_str;
    
    total_len = ft_strlen(s1) + ft_strlen(s2);
    i = 0;
    j = 0;
    totat_str = malloc(total_len + 1);
    if (!s1 || !s2)
        return (0);
    while (s1[i])
    {
        totat_str[i] = s1[i] ;
        i++;
    }
    while (s2[j])
    {
        totat_str[i + j] = s2[j];
        j++;
    }
    totat_str[i + j] = '\0';

    return (totat_str);
}
// int main()
// {
//     char s1[] = "ikram";
//     char s2[] = "dahhan";

//     printf("%s", ft_strjoin(s1, s2));
// }