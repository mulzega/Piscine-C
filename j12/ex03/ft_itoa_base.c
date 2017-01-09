/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 16:13:06 by tgarcia           #+#    #+#             */
/*   Updated: 2016/05/17 17:27:59 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_count_digit(int value, int base)
{
	int	count;

	(value < 0) ? value *= -1 : value;
	count = 0;
	while (value > 0)
	{
		value /= base;
		count++;
	}
	return (count);
}

char	*ft_itoa_base(int value, int base)
{
	char	*ret;
	int		i;
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	count = ft_count_digit(value, base);
	if (!(ret = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	(count > 1) ? count-- : count;
	while (count >= 0 && value >= 0)
	{
		ret[count] = hex[value % base];
		value = value / base;
		count--;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
