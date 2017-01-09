/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcvoid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 11:38:37 by tgarcia           #+#    #+#             */
/*   Updated: 2016/11/03 12:34:08 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_compteur(int i, int size)
{
	char	*it;
	int		j;
	int		l;

	it = ft_itoa_base(i, 16);
	j = size - ft_strlen(it);
	l = 0;
	while (j > l)
	{
		ft_putchar('0');
		l++;
	}
	ft_putstr(it);
}

void	ft_exa(char *actu, int k)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (actu[i] && i < ft_strlen(actu))
			ft_compteur(actu[i], 2);
		else
			ft_putstr("  ");
		if (k == 2 && i == 7)
			ft_putchar(' ');
		i++;
		if (i != 16)
			ft_putchar(' ');
	}
}

void	ft_hd_param(char *actu, int i)
{
	int j;

	j = 0;
	ft_compteur(i, 8);
	ft_putchar(' ');
	ft_putchar(' ');
	ft_exa(actu, 2);
	ft_putchar(' ');
	ft_putstr(" |");
	while (actu[j])
	{
		if (actu[j] == '\a' || actu[j] == '\b' || actu[j] == '\t'\
			|| actu[j] == '\n' || actu[j] == '\v' ||\
			actu[j] == '\f' || actu[j] == '\r')
			ft_putchar('.');
		else
			ft_putchar(actu[j]);
		j++;
	}
	ft_putstr("|\n");
}

void	ft_hd_noparam(char *actu, int i)
{
	ft_compteur(i, 7);
	ft_putchar(' ');
	ft_exa(actu, 1);
	ft_putchar('\n');
}

void	ft_id_zero(int i, int k)
{
	if (i != 0)
	{
		if (k == 1)
			ft_compteur(i, 7);
		else
			ft_compteur(i, 8);
		ft_putchar('\n');
	}
}
