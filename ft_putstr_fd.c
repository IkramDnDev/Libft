/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:50 by idahhan           #+#    #+#             */
/*   Updated: 2024/10/31 21:55:22 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
// int main()
// {
//    int fd = open("hello.txt", O_WRONLY | O_CREAT, 0644);
//    char str[6] = "ikram";
//    if (fd == -1) 
//     {
//         printf("Erreur lors de l'ouverture du fichier");
//     }
//     ft_putstr_fd(str, fd);
// }
