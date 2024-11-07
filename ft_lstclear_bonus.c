/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:28:00 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/06 16:41:56 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void del(void *content)
//{
//    free(content); 
//}

void ft_lstclear_bonus(t_list **lst, void (*del)(void *))
{
    t_list *current;
    t_list *next;

    while (!lst || !del)
        return;
    
    current = *lst;
    while (current)
    {
        next = current->next;
        del(current->content);
        free(current);
        current = next;
    }
    *lst = NULL; 
}
// int main()
// {
//     t_list *head = ft_lstnew(malloc(sizeof(int)));
//     t_list *second = ft_lstnew(malloc(sizeof(int)));
//     ft_lstadd_back(&head, second);

//     ft_lstclear(&head, del);
//     return 0;
// }
