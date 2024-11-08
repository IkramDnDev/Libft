/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idahhan <idahhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:28:05 by idahhan           #+#    #+#             */
/*   Updated: 2024/11/08 16:20:09 by idahhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del_content(void *content)
// {
//     free(content);
// }
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
// int main() {
//     char *data = malloc(20 * sizeof(char));
//     if (data == NULL) {
//         return 1;
//     }
//     snprintf(data, 20, "Mon élément");
//     t_list *node = ft_lstnew(data);
//     if (node == NULL) {
//         free(data);
//         return 1;
//     }
//     ft_lstdelone(node, del_content);
//     return 0;
// }