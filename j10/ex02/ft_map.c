/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 17:07:06 by mulzega           #+#    #+#             */
/*   Updated: 2016/04/27 12:16:37 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	j;
	int *tab2;

	i = 0;
	j = length;
	tab2 = (int*)malloc(sizeof(*tab2) * j);
	if (!tab2)
		return (0);
	while (i < j)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
}
