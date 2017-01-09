/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 18:31:08 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/06 14:31:17 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
	t_list	*list;

	list = begin_list;
	if (list)
	{
		while (list)
		{
			f(list->data);
			list = list->next;
		}
	}
}
