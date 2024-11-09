/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:26 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/09 21:25:39 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = s;
	value = (unsigned char)c;
	while (n-- > 0)
	{
		*ptr = value;
		ptr++;
	}
	return (s);
}
// int main()
// {
// 	int i = 7553;//-1
// 	ft_memset(&i,0,4);//1111111 11111111   1111111 11111111
// 	ft_memset(&i,255,1);

// 	printf("i = %d\n",i);
// }
// int main()
// {
// 	int nbr = -2147483648;// i = int_max->-2147483648;
// 	// // 01111111 | 11111111 | 11111111 | 11111111
// 	// printf("nbr = %d\n", nbr);	
// 	// ft_memset(&nbr, 0, 4);
// 	// printf("nbr = %d\n", nbr);
// 	ft_memset((char *)&nbr, 0, 4);
// 	ft_memset((char *)&nbr + 1, 0, 4);
// 	ft_memset((char *)&nbr + 2, 0, 4);
// 	ft_memset((char *)&nbr + 3, 128, 4);
// 	printf("nbr = %d", nbr);
// 	// void *p = malloc(8);
// 	// ft_memset(p, 'A', 4);
// 	// ft_memset(p + 4, 'B', 4);
// 	// printf("%s", p);
// }