/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:27:53 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 21:41:01 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst == NULL || new == NULL)
		return ;
	new -> next = *alst;
	*alst = new;
}
/*
int main()
{
    // Création d'un premier élément de la liste
    t_list *head = ft_lstnew("ikram");

    // Création d'un nouveau nœud pour "Hello" et ajout au début de la liste
    t_list *new_node = ft_lstnew("dahhan");
    ft_lstadd_front(&head, new_node);

    // Affichage des éléments de la liste
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Libération de la mémoire
    while (head != NULL)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/