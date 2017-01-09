/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 15:57:23 by mulzega           #+#    #+#             */
/*   Updated: 2016/04/21 17:23:31 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	k;
	int	*tab;

	k = 0;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * ((max - min)));
	if (!tab)
		return (0);
	while (min < max)
	{
		tab[k] = min;
		min++;
		k++;
	}
	*range = tab;
	return (k);
}
