/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 18:05:30 by mulzega           #+#    #+#             */
/*   Updated: 2016/12/03 18:25:53 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = *begin_list;
	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		while (elem->next != NULL)
			elem = elem->next;
		elem->next = ft_create_elem(data);
	}
}
