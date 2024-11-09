/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:27:48 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/09 19:18:07 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*current;

	if (*alst == NULL)
	{
		*alst = new;
	}
	else
	{
		current = *alst;
		while (current -> next != NULL)
		{
			current = current -> next;
		}
		current -> next = new;
	}
}
// int main() {
//     t_list *head = NULL; // Initialiser la tête de la liste à NULL

//     // Ajouter des éléments à la liste
//     ft_lstadd_back(&head, ft_lstnew("Premier"));
//     ft_lstadd_back(&head, ft_lstnew("Deuxieme"));
//     ft_lstadd_back(&head, ft_lstnew("Troisieme"));

//     // Parcourir et afficher la liste
//     t_list *current = head;
//     while (current != NULL) {
//         printf("%s\n", (char *)current->content);
//         current = current->next; // Avance au prochain élément
//     }
//     // Libération de la mémoire
//     while (head != NULL)
//     {
//         t_list *temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return 0;
// }