/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:20:16 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/18 16:06:48 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"
#define BUF_SIZE 1

int		main(int ac, char **av)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (ac == 2)
	{
		while (read(fd, buf, BUF_SIZE) > 0)
			ft_putstr(buf);
		buf[read(fd, buf, BUF_SIZE)] = '\0';
		return (0);
	}
	close(fd);
	ft_putstr("Too many arguments.\n");
	return (0);
}
