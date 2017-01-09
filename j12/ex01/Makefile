# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mulzega <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/11 16:34:02 by mulzega           #+#    #+#              #
#    Updated: 2016/12/08 14:52:28 by mulzega          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c\
	  ft_fonction.c

WWW = gcc -Wall -Werror -Wextra

OBJ = ft_cat.o\
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
