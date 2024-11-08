/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:28:56 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 21:53:04 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
/*
int main() {
    t_list *head = ft_lstnew("Premier");
    ft_lstadd_front(&head, ft_lstnew("Deuxième"));
    ft_lstadd_front(&head, ft_lstnew("Troisième"));
    int size = ft_lstsize(head);
    printf("Taille de la liste: %d\n", size); // Devrait afficher 3

    return 0;
}*/