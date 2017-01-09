/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 15:58:21 by mulzega           #+#    #+#             */
/*   Updated: 2016/11/03 12:30:37 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#define BUF_SIZE 1

int		main(int ac, char **av)
{
	int		ijk[4];
	char	buf[BUF_SIZE + 1];

	if (ac == 1 || ac == 2 || ac == 3)
	{
		ft_argc(ac);
		return (0);
	}
	ijk[0] = 2;
	ijk[3] = 0;
	while (++ijk[0] < ac)
	{
		ijk[2] = open(av[ijk[0]], O_RDONLY);
		ijk[1] = ft_oct(ijk[2]);
		ijk[2] = open(av[ijk[0]], O_RDONLY);
		if (ac > 4 && ijk[2] > 0 && ++ijk[3] >= 0)
			ft_present(ijk[3], av[ijk[0]]);
		ft_print(ijk[2], ijk[1], av[ijk[0]], ft_atoi(av[2]));
	}
	buf[read(ijk[2], buf, BUF_SIZE)] = '\0';
	close(ijk[2]);
	return (0);
}
