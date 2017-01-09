/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/04 15:58:02 by tgarcia           #+#    #+#             */
/*   Updated: 2016/05/17 18:12:41 by mulzega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# define BUF_SIZE 1
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_display_error(int ac, char **av);
int		ft_strlen(char *str);
int		ft_open_i(char *file, int verif);
void	ft_read_stock(int text, char *stock);
int		ft_read_count(int text);
void	ft_close_v(int text);
int		ft_atoi_s(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_construct_stock(int k, int ac, char **av);
void	ft_affich_hexdump(char *stock, int k);
char	*ft_actu(char *stock, int i);
void	ft_while_hd(char *actu, int l, int k, int i);
int		ft_count_digit(int value, int base);
char	*ft_itoa_base(int value, int base);
void	ft_hd_noparam(char *actu, int i);
void	ft_hd_param(char *actu, int i);
void	ft_exa(char *actu, int k);
void	ft_compteur(int i, int size);
void	ft_id_zero(int i, int k);
void	ft_bad_file(char *file);

#endif
