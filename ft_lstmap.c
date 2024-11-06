/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:28:46 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/06 16:42:02 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
   t_list *new_list = NULL;
   t_list *new_elem;

   while (lst)
   {
        new_elem = ft_lstnew(f(lst->content));
        
        if (!new_elem)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }

        ft_lstadd_back(&new_list, new_elem);

        lst = lst->next;
   }
   return (new_list);   
}