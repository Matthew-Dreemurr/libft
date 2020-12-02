GG = -Wall -Wextra -Werror
all:
	@cd ../ && make && cd main/
add:
	find ../*.c | sed 's/ft_*/main_/' | sed 's/..\///' | xargs -n 1 touch
rm:
	rm a.out
atoi:		all
	gcc ${GG} main_atoi.c ../libft.a test.h
isalnum:	all
	gcc ${GG} main_isalnum.c ../libft.a test.h
isalpha:	all
	gcc ${GG} main_isalpha.c ../libft.a test.h
isascii:	all
	gcc ${GG} main_isascii.c ../libft.a test.h
isdigit:	all
	gcc ${GG} main_isdigit.c ../libft.a test.h
isprint:	all
	gcc ${GG} main_isprint.c ../libft.a test.h
memcpy:		all
	gcc ${GG} main_memcpy.c ../libft.a test.h
memccpy:	all
	gcc ${GG} main_memccpy.c ../libft.a test.h
memmove:	all
	gcc ${GG} main_memmove.c ../libft.a test.h
memset:		all
	gcc ${GG} main_memset.c ../libft.a test.h
strchr:		all
	gcc ${GG} main_strchr.c ../libft.a test.h
strlen:		all
	gcc ${GG} main_strlen.c ../libft.a test.h
strncmp:	all
	gcc ${GG} main_strncmp.c ../libft.a test.h
tolower:	all
	gcc ${GG} main_tolower.c ../libft.a test.h
toupper:	all
	gcc ${GG} main_toupper.c ../libft.a test.h
strlcpy:	all
	gcc ${GG} main_strlcpy.c ../libft.a test.h
strlcat:	all
	gcc ${GG} main_strlcat.c ../libft.a test.h
bzero:		all
	gcc ${GG} main_bzero.c ../libft.a test.h
strnstr:	all
	gcc ${GG} main_strnstr.c ../libft.a test.h
putchar_fd:	all
	gcc ${GG} main_putchar_fd.c ../libft.a test.h
putstr_fd:	all
	gcc ${GG} main_putstr_fd.c ../libft.a test.h
putnbr_fd:	all
	gcc ${GG} main_putnbr_fd.c ../libft.a test.h
substr:	all
	gcc ${GG} main_substr.c ../libft.a test.h
