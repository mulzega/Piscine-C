/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 13:22:16 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/06 14:33:07 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

void		ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	list = *begin_list1;
	while (list->next)
		list = list->next;
	list->next = begin_list2;
}
