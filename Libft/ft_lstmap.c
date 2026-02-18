/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:39:37 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/19 15:28:16 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
- Iterates
through the list ’lst’, applies the
function ’f’ to each node’s content,

- creates
a new list resulting of the successive applications
of the function ’f’.

- The ’del’ function is used to
delete the content of a node if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!f || !del)
		return (NULL);
	if (!lst)
		return (NULL);
	new_list = NULL;
	node = NULL;
	while (lst)
	{
		node = ft_lstnew((*f)(lst->content));
		if (!node)
		{
			ft_lstclear(&new_list, (*del));
			new_list = NULL;
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
