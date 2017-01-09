/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 19:50:09 by tgarcia           #+#    #+#             */
/*   Updated: 2016/05/17 17:27:51 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_atoi_s(char *str)
{
	int		i;
	int		nbr;

	nbr = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v'
				|| (str[i] == ' ') || (str[i] == '\f') || str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			nbr = (nbr * 10) + str[i] - '0';
		else
			return (-1);
		i++;
	}
	return (nbr);
}
