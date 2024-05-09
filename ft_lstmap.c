/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-09 11:28:00 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-09 11:28:00 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*present;
	t_list	*new_node;

	if(!lst || !f || !del)
		return (NULL);

	while (lst)
	{
		present = ft_lstnew(f(lst->content));
			if(!new_node)
			{
				ft_lstclear(&new_node, del);
				return(NULL);
			}
			ft_lstadd_back(&present, new_node);
			lst = lst->next;
	}
	return (new);
}