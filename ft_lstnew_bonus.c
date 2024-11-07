/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:28:50 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/07 21:51:36 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_noeud;

	new_noeud = (t_list *)malloc(sizeof(t_list));
	if (new_noeud == NULL)
		return (NULL);
	new_noeud -> content = content;
	new_noeud -> next = NULL;
	return (new_noeud);
}
/*
int main()
{
    char *content = "Hello, world!";
    t_list *node = ft_lstnew(content);
    if (node == NULL)
    {
        printf("Erreur d'allocation du nœud.\n");
        return 1;
    }
    printf("contenu du noeud : %s\n", (char *)node->content);
    free(node);
    return 0;
}*/
