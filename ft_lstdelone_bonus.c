/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:28:05 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/11 09:53:35 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del_content(void *content)
{
	free(content);
	content = NULL;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del)
	{
		del(lst -> content);
	}
	free(lst);
}
