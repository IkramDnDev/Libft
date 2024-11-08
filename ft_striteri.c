/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:30:14 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 17:42:36 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void to_upper_inplace(unsigned int i, char *c) {
    if (i % 2 == 0)
        *c = toupper(*c);  // Majuscules pour les index pairs
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
int main() {
    char str[] = "hello";
    ft_striteri(str, to_upper_inplace);
    printf("%s\n", str);
    return 0;
}*/