# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mulzega <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/25 14:53:01 by mulzega           #+#    #+#              #
#    Updated: 2016/10/04 16:03:18 by mulzega          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ft_do_op.c\
	  ft_fonction.c\
	  ft_ope.c\

WWW = gcc -Wall -Werror -Wextra

OBJ = ft_do_op.o\
	  ft_fonction.o\
	  ft_ope.o

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@$(WWW) -c $? $(SRC) -I.
	@$(WWW) $? $(OBJ) -I. -o $(NAME)

clean:
	@/bin/rm $(OBJ) 

fclean: clean
	@/bin/rm -f $(NAME)
