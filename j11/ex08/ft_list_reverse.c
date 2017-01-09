/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 16:35:06 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/06 14:29:48 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*next;
	t_list	*newlist;

	newlist = NULL;
	list = *begin_list;
	while (list)
	{
		next = list->next;
		list->next = newlist;
		newlist = list;
		list = next;
	}
	*begin_list = newlist;
}
