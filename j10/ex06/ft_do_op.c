/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 11:46:35 by mulzega           #+#    #+#             */
/*   Updated: 2016/06/04 15:10:50 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		negative;

	nbr = 0;
	negative = 1;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v'
				|| (str[i] == ' ') || (str[i] == '\f') || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && ((str[i] >= '0') && (str[i] <= '9')))
	{
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	return (nbr * negative);
}

int		ft_find(char sign, char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == sign)
			return (i);
		i++;
	}
	return (-1);
}

char	ft_error(char sign)
{
	if (sign == '/')
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	else
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
}

int		main(int ac, char **av)
{
	int		(*f[5])(char*, char*);
	char	*str;
	int		index;

	str = "+-%/*";
	index = ft_find(*av[2], str);
	f[0] = &ft_add;
	f[1] = &ft_less;
	f[2] = &ft_modd;
	f[3] = &ft_div;
	f[4] = &ft_time;
	if (ac != 4)
		return (0);
	if ((*av[2] == '/' || *av[2] == '%') && *av[3] == '0')
		ft_error(*av[2]);
	else if (index != -1)
		ft_putnbr((f[index])(av[1], av[3]));
	else if (*av[2] != '*' || *av[2] != '/' || *av[2] != '%' || *av[2] != '+' ||
			*av[2] != '-')
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
