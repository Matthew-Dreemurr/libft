all:
	find ../*.c | sed 's/ft_*/main_/' | sed 's/..\///' | xargs -n 1 touch
re:
	rm a.out
atoi:
	gcc main_atoi.c ../libft.a test.h
isalnum:
	gcc main_isalnum.c ../libft.a test.h
isalpha:
	gcc main_isalpha.c ../libft.a test.h

