/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 19:12:12 by mulzega           #+#    #+#             */
/*   Updated: 2016/04/12 17:22:22 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	k;
	int	*tab;

	k = 0;
	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * ((max - min)));
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[k] = min;
		k++;
		min++;
	}
	return (tab);
}
