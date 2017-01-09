/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 14:08:10 by mulzega           #+#    #+#             */
/*   Updated: 2015/10/29 17:12:29 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 64 && str[i] < 91) && !(str[i] > 96 && str[i] < 123))
			return (0);
		i++;
	}
	return (1);
}