/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:37:07 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/08 12:42:22 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "main/test.h"
/*
**	[Salut_comment_vas_tu_?]
**	clean_str make a buff with the ft_strtrim of s
**	sep_count count number of sep whit the buff form clean_str
*/

char		*clean_str(char const *s, char c)
{
	char	c_to_s[2];
	char	*buff;
	size_t	len;

	len = ft_strlen(s);
	ft_bzero(c_to_s, 2);
	if (!(buff = malloc(len + 1)))
		return (NULL);
	ft_bzero(buff, len + 1);
	c_to_s[0] = c;
	if (!(buff = ft_strtrim(s, c_to_s)))
		return (NULL);
	return (buff);
}

size_t	sep_count(char const *buff, char c)
{
	size_t	i;

	i = 0;
	while (*buff)
	{
		if (*buff == c)
			i++;
		buff++;
	}
												printf("sep: %lu\n", i);
	return (1);
}

char	**tab_alloc(char const *buff, char c, size_t len)
{
	char	**ret;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while ()
	{
		// faire separation de chaque mot, les compter et alloc len word + 1 a re[i]
		ret[i] = malloc();

	}
}

char	**ft_split(char const *s, char c)
{
	char	*buff;
	char	**ret;

												printf("s: |%s|\n", s);
												printf("c: |%c|\n\n", c);
	if (!(buff = clean_str(s, c)))
		return (NULL);
												printf("buff cleaned: |%s|\n", buff);
	
	if (!(ret = tab_alloc(buff, c, sep_count(buff, c))))
		return (NULL);
	return (NULL);
}