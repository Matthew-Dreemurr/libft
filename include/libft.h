/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:03:28 by mhadad            #+#    #+#             */
/*   Updated: 2021/03/17 14:03:48 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* ======  Include  ======= */

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

/* ======  Macros  ======= */

/*
**   Return macro.
**
**   A line has been read   L_READ
**   End of line            EO_FILE
**   Error                  ERR
*/

# define L_READ		1
# define EO_FILE	0
# define ERR		-1

/*
**   Bool macro.
*/

# define TRUE		1
# define FALSE		0

# define MAX_INT	2147483647
# define MIN_INT	-2147483648
# define LONG_MAX	9223372036854775807
# define LONG_MIN	-9223372036854775808

/* ======  Prototype  ======= */

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/* --- chained_list --- */

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*d)(void *));

/* --- ctype --- */

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);

/* --- stdio --- */

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/* --- stdlib --- */

int				ft_atoi(const char *c);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_itoa(int n);

/* --- string --- */

void			*ft_memset(void *b, int c, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*strrchr(const char *s, int c);
char			*ft_strdup(const char *s);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* --- custom --- */

int			free_return(void **addr, int ret);
ssize_t		lentochar(const char *str, int c, int mode);
char		*join_str(char *s1, char *s2, char **tofree);
char		*next_line(char **str);
#endif
