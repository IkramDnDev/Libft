/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:28:00 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/11 09:51:30 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*debut;
	t_list	*temp;

	while (!lst || !del)
		return ;
	debut = *lst;
	while (debut)
	{
		temp = debut;
		debut = debut -> next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
