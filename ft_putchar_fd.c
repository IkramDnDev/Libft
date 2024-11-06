/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:34 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/01 18:41:16 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	int fd;

//      int fd =  open("hello.txt", O_WRONLY | O_CREAT, 0644);
//     if (fd == -1) 
//     {
//         printf("Erreur lors de l'ouverture du fichier");
//         return 1; 
//     }

//     ft_putchar_fd('m', 2);
//     close(fd);
// }
