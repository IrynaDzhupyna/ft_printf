/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irdzhupy <irdzhupy@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:52:22 by irdzhupy          #+#    #+#             */
/*   Updated: 2025/12/19 12:23:01 by irdzhupy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		temp = current->next;
		del(current->content);
		free(current);
		current = temp;
	}
	*lst = NULL;
}
