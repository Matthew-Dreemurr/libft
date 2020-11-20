/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:03:28 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/20 13:51:50 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft_h
# define libft_h

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy( char *dst, const char *src, size_t siz);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
#endif