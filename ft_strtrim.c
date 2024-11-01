/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:32:12 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 15:52:06 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int ft_exist(const char *str, char c)
{
    while(*str)
    {
        if(*str == c)
            return 1;
        str++;
    }
    return 0;

}

char *ft_strtrim(char const *s1, char const *set)
{
    char *newstr;
    size_t start;
    size_t end;
    size_t i;
    
    if (!s1 || !set)
    {
        return (0);
    }
    start = 0;
    end = 0;
    i = 0;

    while (*s1 && ft_exist(set, s1[start]))
        start++;
    
    end = start;

    while (s1[end])
        end++;
    while (end > start && ft_exist(set, s1[end - 1]))
        end--;
    
    newstr = (char *)malloc((end - start + 1) *sizeof(char));
    if (!newstr)
        return (0);
    while (i < end - start)
    {
        newstr[i] = s1[i + start];
        i++;
    }
    newstr[end - start] = '\0';
    return (newstr);
}

// int main()
// {
//     char s1[] = "$,h-llo$-";
//     char set[] = "$-,";

//     char *newst = ft_strtrim(s1, set);
//     printf("%s", newst);
// }