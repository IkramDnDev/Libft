/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:30:07 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/09 16:32:29 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	len;
	char	*ptr;

	len = ft_strlen(src);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	ptr = copy;
	if (copy == NULL)
		return (NULL);
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (copy);
}
// int main ()
// {
//     char *src = "ikramabcderfgh";
//     printf("%s", ft_strdup(src));
// }