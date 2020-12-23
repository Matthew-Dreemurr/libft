# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 11:51:51 by mhadad            #+#    #+#              #
#    Updated: 2020/12/23 18:21:23 by mhadad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ${wildcard *.c}

OBJ = ${SRC:c=o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -I . -c $^ -o $@

all: $(NAME)

$(NAME): ${OBJ}
	ar -rc $(NAME) ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, $(NAME), clean, fclean, re
