/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 16:02:12 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/06 16:30:18 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*list;

	list = begin_list;
	while (nbr > 0)
	{
		if (!list)
			return (NULL);
		list = list->next;
		nbr--;
	}
	return (list);
}
