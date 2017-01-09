/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 12:07:01 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/11 14:21:45 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_find(char sign, char *tab);
int		main(int ac, char **av);
int		ft_add(char *str, char *str2);
int		ft_less(char *str, char *str2);
int		ft_modd(char *str, char *str2);
int		ft_div(char *str, char *str2);
int		ft_time(char *str, char *str2);
void	ft_putstr(char *str);
#endif
