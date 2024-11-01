/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:30:07 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 15:55:36 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*copy;
	size_t  len;
	char    *ptr;
    
    copy = (char *)malloc((len + 1) * sizeof(char));
    ptr = copy;
    len = ft_strlen(src);

    if	(copy == NULL)
        return NULL;
    while(*src)
    {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return copy;
}
// int main ()                                                                                                           
// {
//     char src[20] = "ikramabcderfgh";
//     // printf("%s", ft_strdup(src));
// }