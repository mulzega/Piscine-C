# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mulzega <mulzega@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/04 16:00:56 by tgarcia           #+#    #+#              #
#    Updated: 2016/12/08 14:23:50 by mulzega          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump
FLAG = -Wall -Wextra -Werror
FILES =	ft_atoi.c \
		ft_error.c \
		ft_funcdif.c \
	   	ft_funcvoid.c \
		ft_itoa_base.c \
		ft_main.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_read.c \
		ft_strcmp.c \
		ft_strlen.c

OBJ = 	ft_atoi.o \
		ft_error.o \
		ft_funcdif.o \
	   	ft_funcvoid.o \
		ft_itoa_base.o \
		ft_main.o \
		ft_putchar.o \
		ft_putstr.o \
		ft_read.o \
		ft_strcmp.o \
		ft_strlen.o

ALL: $(NAME)

$(NAME):
		@gcc $(FLAG) -o $(NAME) $(FILES)

clean:
		@/bin/rm -f $(OBJ)

fclean : clean
		@/bin/rm -f $(NAME)

re : fclean ALL
