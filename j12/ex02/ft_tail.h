/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 16:03:24 by mulzega           #+#    #+#             */
/*   Updated: 2016/05/17 16:03:28 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		main(int ac, char **av);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(char *str);
void	ft_putchar_error(char c);
void	ft_putstr_error(char *str);
void	ft_argc(int a);
int		ft_atoi(char *str);
int		ft_oct(int fd);
void	ft_print(int fd, int j, char *c, int k);
void	ft_present(int ac, char *c);

#endif
