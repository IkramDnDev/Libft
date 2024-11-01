/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:55 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 15:55:43 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_word(const char *s, char c)
{
    int count = 0;
    int in_world = 0;
    while(*s)
    {
        if(*s != c && in_world == 0)
        {
            count++;
            in_world = 1;
        }
        else if(*s == c)
            in_world = 0;
        s++;
    }

    return count;
}

static char *copy_word(const char *start, size_t len)
{
    char *word = (char *)malloc((len +1) *sizeof(char));
    if(!word)
        return 0;
    size_t i = 0;
    while(i < len)
    {
        word[i] = start[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    if(!s)
        return 0;
    const char *start;
    size_t len;
    int word_count = count_word(s, c);
    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    if(!result)
        return 0;

    int index = 0;
    while (*s)
    {
        while(*s == c)
            s++;
        if(*s)
        {
            start = s;
            len = 0;
            while(*s && *s != c)
            {
                len++;
                s++;
            }
            result[index++] = copy_word(start, len);
        }
    }
    result[index] = NULL;
    return result;
}       
/*
int main()
{
    char tab[]=" abcd defg hijk ";
    char c =' ';
    char **words = ft_split(tab, c);
    int i = 0;
    while(i < count_word(tab,c) + 1)
    {
        printf("%s\n", words[i]);
        i++;
    }
    int j = 0;
    while(words[j] != NULL)
    {
        free(words[j]);
        j++;
    }
} */