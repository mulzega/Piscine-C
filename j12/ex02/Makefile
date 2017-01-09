# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mulzega </var/mail/mulzega>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/14 13:01:31 by mulzega           #+#    #+#              #
#    Updated: 2016/12/08 14:24:12 by mulzega          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c\
	  ft_fonction.c\
	  main.c

WWW = gcc -Wall -Werror -Wextra

OBJ = ft_tail.o\
	  ft_fonction.o\
	  main.o

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@$(WWW) -c $? $(SRC) -I.
	@$(WWW) $? $(OBJ) -I. -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
