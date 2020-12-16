# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 11:51:51 by mhadad            #+#    #+#              #
#    Updated: 2020/12/16 10:50:55 by mhadad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC  =  ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
ft_tolower.c ft_toupper.c
OBJ  = ${SRC:c=o}
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


so:
	$(CC) -fPIC -nostartfiles $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)