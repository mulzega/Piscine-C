/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 11:59:30 by tgarcia           #+#    #+#             */
/*   Updated: 2016/11/03 12:49:09 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_open_i(char *file, int verif)
{
	int text;

	if ((text = open(file, O_RDONLY)) == -1 && verif)
	{
		write(2, "hexdump: ", 9);
		write(2, file, ft_strlen(file));
		write(2, ": No such file or directory\n", 28);
	}
	return (text);
}

int		ft_read_count(int text)
{
	int		i;
	int		j;
	char	buffer[BUF_SIZE + 1];

	j = 0;
	while ((i = read(text, buffer, BUF_SIZE)) != 0)
		j++;
	return (j);
}

void	ft_read_aff(int text, int ltext, int offset)
{
	int		i;
	int		ct;
	int		j;
	char	buffer[BUF_SIZE + 1];

	if (offset > ltext)
		ct = 0;
	else
		ct = ltext - offset;
	j = 0;
	while ((i = read(text, buffer, BUF_SIZE)) != 0)
	{
		if (j >= ct)
		{
			buffer[i] = '\0';
			ft_putstr(buffer);
		}
		j++;
	}
}

void	ft_read_stock(int text, char *stock)
{
	int		i;
	int		ct;
	char	buffer[BUF_SIZE + 1];

	while ((i = read(text, buffer, BUF_SIZE)) != 0)
	{
		ct = ft_strlen(stock);
		stock[ct] = buffer[0];
		stock[ct + 1] = '\0';
	}
}

void	ft_close_v(int text)
{
	if (close(text) == -1)
	{
		write(2, "close() error\n", 15);
	}
}
