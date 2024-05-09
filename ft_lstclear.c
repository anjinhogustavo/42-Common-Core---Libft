/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-09 11:09:29 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-09 11:09:29 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfth.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

		while(lst != NULL)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
		free(lst);
		*lst = NULL;
}