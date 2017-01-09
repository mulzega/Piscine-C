/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 11:37:35 by tgarcia           #+#    #+#             */
/*   Updated: 2016/11/03 12:47:25 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_display_error(int ac, char **av)
{
	if (ac == 1 || (ac == 2 && ft_strcmp(av[1], "-C") == 0))
	{
		while (1)
		{
		}
		return (0);
	}
	if (ac > 2 && ft_strcmp(av[1], "-C") == 0)
		return (2);
	else
		return (1);
}

void	ft_bad_file(char *file)
{
	write(2, "hexdump: ", 9);
	write(2, file, ft_strlen(file));
	write(2, ": Bad file descriptor\n", 22);
}
