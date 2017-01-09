/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 10:33:20 by mulzega           #+#    #+#             */
/*   Updated: 2015/10/21 10:33:36 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar('8');
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb / 10)
		{
			ft_putnbr(nb / 10);
			ft_putchar('0' + (nb % 10));
		}
		else
		{
			ft_putchar('0' + nb);
		}
	}
}
