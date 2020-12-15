# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 11:51:51 by mhadad            #+#    #+#              #
#    Updated: 2020/12/15 13:16:05 by mhadad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC  = ${wildcard *.c}
OBJ  = ${SRC:c=o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror
.PHONY: all, ${NAME}, clean, fclean, re

%.o: %.c
	${CC} ${CFLAGS} -I . -c $^ -o $@

all: ${NAME}


${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

so:
	$(CC) -fPIC -nostartfiles $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)
