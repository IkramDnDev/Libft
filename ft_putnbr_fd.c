/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:45 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/03 16:58:20 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n >= INT_MIN && n <= INT_MAX)
    {
        if(n < 0)
        {
            if(n == INT_MIN)
                write(fd, "-2147483648", 11);
            else
            {
                ft_putchar('-', fd);
                n = -n;
                ft_putnbr_fd(n, fd);
            }
        }
        else if(n > 9)
        {
            ft_putnbr_fd(n / 10, fd);
            ft_putnbr_fd(n %10, fd);
        }
        else if(n <= 9)
        {
            n += 48;
            ft_putchar(n, fd);
        }
    }
}
// int main()
// {
//     int fd = open("ikram.txt", O_WRONLY, 0644);
//     ft_putnbr_fd(-123456688, fd);
//     close(fd);

// }