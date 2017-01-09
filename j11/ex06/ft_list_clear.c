/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 15:32:20 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/03 16:34:50 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*todel;
	t_list	*list;

	if (*begin_list)
	{
		list = *begin_list;
		while (list)
		{
			todel = list->next;
			free(list);
			list = todel;
		}
		*begin_list = NULL;
	}
}
