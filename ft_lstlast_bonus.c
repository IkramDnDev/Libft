/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:28:15 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 21:47:18 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
/*
int main() {
    t_list *head = ft_lstnew("Premier");
    ft_lstadd_front(&head, ft_lstnew("Deuxième"));
    ft_lstadd_front(&head, ft_lstnew("Troisième"));

    t_list *last = ft_lstlast(head);
    if (last != NULL) {
        printf("Dernier élément: %s\n", (char *)last->content);
    } else {
        printf("La liste est vide.\n");
    }

    return 0;
}*/