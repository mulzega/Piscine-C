/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 16:34:58 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/17 12:04:42 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_cat.h"
#define BUF_SIZE 1

int		main(int ac, char **av)
{
	int		fd;
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 0;
	if (ac == 1)
	{
		while (i != 2)
			i--;
	}
	while (++i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
			ft_error(av[i]);
		while (read(fd, buf, BUF_SIZE) > 0)
			ft_putstr(buf);
	}
	buf[read(fd, buf, BUF_SIZE)] = '\0';
	close(fd);
	return (0);
}
