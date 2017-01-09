/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 16:01:09 by mulzega           #+#    #+#             */
/*   Updated: 2016/06/12 15:07:24 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_tail.h"
#define BUF_SIZE 1

void	ft_argc(int a)
{
	int		i;

	i = 0;
	if (a == 1 || a == 3)
	{
		while (i != 2)
			i--;
	}
	else
	{
		ft_putstr_error("tail: option requires an argument -- c\nusage: tail");
		ft_putstr_error("[-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]");
	}
}

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

int		ft_oct(int fd)
{
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 0;
	while (read(fd, buf, BUF_SIZE) > 0)
		i++;
	close(fd);
	return (i);
}

void	ft_print(int fd, int j, char *c, int k)
{
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 0;
	if (fd == -1)
		ft_error(c);
	while (i < ((j - k)) && read(fd, buf, BUF_SIZE))
		i++;
	while (read(fd, buf, BUF_SIZE) > 0)
		ft_putstr(buf);
}

void	ft_present(int i, char *c)
{
	if (i > 1)
		ft_putchar('\n');
	ft_putstr("==> ");
	ft_putstr(c);
	ft_putstr(" <==\n");
}
