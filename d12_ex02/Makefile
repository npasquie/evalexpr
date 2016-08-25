# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npasquie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/16 23:16:17 by npasquie          #+#    #+#              #
#    Updated: 2016/08/24 10:30:53 by npasquie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
CCFLAGS = -Wall -Werror -Wextra
CC = gcc
SRC = ft_putchar.c ft_atoi.c ft_file_length.c ft_printtail.c ft_putstr.c \
ft_tail.c ft_valid_nbr.c ft_err_putstr.c ft_err_putchar.c
OBJ = $(SRC:.c=.o)

all :
	$(CC) $(CCFLAGS) -c $(SRC)
	$(CC) $(CCFLAGS) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
