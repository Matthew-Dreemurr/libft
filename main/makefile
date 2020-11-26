GG = -Wall -Wextra -Werror

all:
	find ../*.c | sed 's/ft_*/main_/' | sed 's/..\///' | xargs -n 1 touch
re:
	rm a.out
atoi:
	gcc ${GG} main_atoi.c ../libft.a test.h
isalnum:
	gcc ${GG} main_isalnum.c ../libft.a test.h
isalpha:
	gcc ${GG} main_isalpha.c ../libft.a test.h
isascii:
	gcc ${GG} main_isascii.c ../libft.a test.h
isdigit:
	gcc ${GG} main_isdigit.c ../libft.a test.h
isprint:
	gcc ${GG} main_isprint.c ../libft.a test.h
memcpy:
	gcc ${GG} main_memcpy.c ../libft.a test.h
memccpy:
	gcc ${GG} main_memccpy.c ../libft.a test.h
memmove:
	gcc ${GG} main_memmove.c ../libft.a test.h
memset:
	gcc ${GG} main_memset.c ../libft.a test.h
strchr:
	gcc ${GG} main_strchr.c ../libft.a test.h
strlen:
	gcc ${GG} main_strlen.c ../libft.a test.h
strncmp:
	gcc ${GG} main_strncmp.c ../libft.a test.h
tolower:
	gcc ${GG} main_tolower.c ../libft.a test.h
toupper:
	gcc ${GG} main_toupper.c ../libft.a test.h

