/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 16:46:18 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/11 14:30:20 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		ft_add(char *str, char *str2)
{
	return (ft_atoi(str) + ft_atoi(str2));
}

int		ft_less(char *str, char *str2)
{
	return (ft_atoi(str) - ft_atoi(str2));
}

int		ft_modd(char *str, char *str2)
{
	return (ft_atoi(str) % ft_atoi(str2));
}

int		ft_div(char *str, char *str2)
{
	return (ft_atoi(str) / ft_atoi(str2));
}

int		ft_time(char *str, char *str2)
{
	return (ft_atoi(str) * ft_atoi(str2));
}
