/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 16:35:10 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/13 16:32:16 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		main(int ac, char **av);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(char *str);
void	ft_putchar_error(char c);
void	ft_putstr_error(char *str);

#endif
