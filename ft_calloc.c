/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:27:05 by idahhan           #+#    #+#             */
/*   Updated: 2024/10/31 20:04:36 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
//     int *ptr;
//     ptr = ft_calloc(5, sizeof(int));

//     int i = 0;
//     while(i < 5)
//     {
//         printf("%d ", ptr[i]);
//         i++;
//     }
// }
