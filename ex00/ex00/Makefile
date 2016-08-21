# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npasquie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/16 23:16:17 by npasquie          #+#    #+#              #
#    Updated: 2016/08/21 04:38:40 by npasquie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "eval_expr"

all :
	gcc -c -Werror -Wextra -Wall $(NAME).c fctns/ft_calc.c \
	fctns/ft_insert_nb.c fctns/ft_parenthesis.c fctns/opes.c src/ft_atoi.c \
	src/ft_putnbr.c src/ft_putchar.c src/ft_putstr.c fctns/ft_rm_parenth.c \
	src/ft_strcmp.c src/ft_strdup.c
	gcc -Werror -Wextra -Wall -o $(NAME) $(NAME).o ft_calc.o \
	ft_insert_nb.o ft_parenthesis.o opes.o ft_atoi.o \
	ft_putnbr.o ft_putchar.o ft_putstr.o ft_rm_parenth.o ft_strcmp.o ft_strdup.o

clean :
	rm $(NAME).o ft_calc.o \
	ft_insert_nb.o ft_parenthesis.o opes.o ft_atoi.o \
	ft_putnbr.o ft_putchar.o ft_putstr.o ft_rm_parenth.o ft_strcmp.o ft_strdup.o

fclean : clean
	rm $(NAME)

re : fclean all
