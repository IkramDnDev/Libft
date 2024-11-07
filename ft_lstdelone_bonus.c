/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:28:05 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 21:44:00 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void del_content(void *content) {
    free(content); // Libère la mémoire allouée pour le contenu
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del)
	{
		if (del)
		{
			del(lst -> content);
		}
		free(lst);
	}
}
/*
int main() {
    // Créer un contenu pour le nouvel élément
    char *data = malloc(20 * sizeof(char));
    if (data == NULL) {
        return 1; // Vérifie si l'allocation a réussi
    }
    snprintf(data, 20, "Mon élément"); // Remplit le contenu

    // Utiliser ft_lstnew pour créer un nouvel élément
    t_list *node = ft_lstnew(data);
    if (node == NULL) {
        free(data); // Libère la mémoire si l'allocation a échoué
        return 1;
    }

    // Supprimer l'élément
    ft_lstdelone(node, del_content);

    // Après cette opération, l'élément est supprimé et la mémoire est libérée
    return 0;
}*/
