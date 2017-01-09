# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mulzega <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/11 14:01:34 by mulzega           #+#    #+#              #
#    Updated: 2016/05/11 17:55:00 by mulzega          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c\
	  ft_fonction.c

WWW = gcc -Wall -Werror -Wextra

OBJ = ft_display_file.o\
	  ft_fonction.o

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@$(WWW) -c $? $(SRC) -I.
	@$(WWW) $? $(OBJ) -I. -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
