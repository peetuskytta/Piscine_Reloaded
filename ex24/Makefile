# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pskytta <pskytta@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 13:44:06 by pskytta           #+#    #+#              #
#    Updated: 2021/11/04 13:44:01 by pskytta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -Wall -Wextra -Werror

SRC = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c
OBJECT = ./ft_putchar.o ./ft_swap.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o 

OPTIONS = -c -I ./includes/

all: $(NAME)

$(NAME):
	$(CC) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
