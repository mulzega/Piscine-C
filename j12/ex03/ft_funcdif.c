/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcdif.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 15:47:24 by tgarcia           #+#    #+#             */
/*   Updated: 2016/11/04 12:00:28 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_size_stock(int k, int ac, char **av)
{
	int ltext;
	int text;

	ltext = 0;
	while (k < ac)
	{
		if ((text = ft_open_i(av[k], 0)) >= 0)
		{
			ltext = ft_read_count(text) + ltext;
			ft_close_v(text);
		}
		k++;
	}
	return (ltext);
}

char	*ft_construct_stock(int k, int ac, char **av)
{
	int		text;
	int		ltext;
	int		p;
	char	*stock;

	ltext = ft_size_stock(k, ac, av);
	p = 0;
	if (!(stock = (char *)malloc(sizeof(char) * (ltext + 1))))
		return (NULL);
	stock[0] = '\0';
	while (k < ac)
	{
		if ((text = ft_open_i(av[k], 1)) >= 0)
		{
			ft_read_stock(text, stock);
			ft_close_v(text);
			p++;
		}
		k++;
	}
	if (p == 0)
		ft_bad_file(av[k - 1]);
	return (stock);
}

char	*ft_actu(char *stock, int i)
{
	int		k;
	int		j;
	char	*act;

	k = 0;
	j = 0;
	if (i < 0)
		return ("\0");
	if (!(act = (char *)malloc(sizeof(char) * 17)))
		return (NULL);
	while (stock[k])
	{
		if (k >= i && k <= i + 15)
		{
			act[j] = stock[k];
			j++;
		}
		k++;
	}
	act[j] = '\0';
	return (act);
}
