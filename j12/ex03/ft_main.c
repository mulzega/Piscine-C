/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 16:06:47 by tgarcia           #+#    #+#             */
/*   Updated: 2016/11/04 12:00:26 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_affich_hexdump(char *stock, int k)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	l = 0;
	while (stock[i])
	{
		if (j == 0)
		{
			if (ft_strcmp(ft_actu(stock, i), ft_actu(stock, i - 16)) == 0)
				l++;
			else
				l = 0;
			ft_while_hd(ft_actu(stock, i), l, k, i);
		}
		if (j == 15)
			j = -1;
		j++;
		i++;
	}
	ft_id_zero(i, k);
}

void	ft_while_hd(char *actu, int l, int k, int i)
{
	if (l == 1)
		ft_putstr("*\n");
	else if (l == 0)
	{
		if (k == 1)
			ft_hd_noparam(actu, i);
		else
			ft_hd_param(actu, i);
	}
}

int		main(int ac, char **av)
{
	int		k;
	char	*stock;

	if ((k = ft_display_error(ac, av)) == 0)
		return (0);
	stock = ft_construct_stock(k, ac, av);
	ft_affich_hexdump(stock, k);
	return (0);
}
