/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 10:31:16 by mulzega           #+#    #+#             */
/*   Updated: 2015/10/21 10:32:35 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_num(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if ((a != '9' || b != '8' || c != '9' || d != '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0' - 1;
	while (++a <= '9')
	{
		b = '0' - 1;
		while (++b < '9')
		{
			c = a - 1;
			while (++c <= '9')
			{
				d = b;
				while (++d <= '9')
				{
					ft_print_num(a, b, c, d);
				}
			}
		}
	}
}
