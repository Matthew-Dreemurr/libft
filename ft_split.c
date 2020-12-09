/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:37:07 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/08 15:01:03 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
**	[Salut_comment_vas_tu_?]
**	clean_str make a buff with the ft_strtrim of s
**	sep_count count number of sep whit the buff form clean_str
**	tab_alloc count len of each word en alloc buff[index] whit len_word + 1
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
	return (1);
}

int		check_sep(char c, const char set)
{
	if (c == set)
		return (1);
	return (0);
}

char	**tab_alloc(char const *buff, char c)
{
	char			**ret;
	size_t			len_word;
	size_t			index;
	size_t			i;
	unsigned int	dest_start;

	len_word = 0;
	dest_start = 0;
	index = 0;
	i = 0;

	if (!(ret = malloc(sizeof(char *) * sep_count(buff, c))))
		return (NULL);
	while (buff[i])
	{
		if (check_sep(buff[i - 1], c))
		{
			if (!(ret[index] = malloc(len_word)))
				return (NULL);
			ft_bzero(ret[index], len_word);
			ret[index] = ft_substr(buff, dest_start, len_word - 1);
			dest_start += len_word;
			len_word = 0;
			index++;
		}
		i++;
		len_word++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	*buff;
	char	**ret;

	if (!s)
		return (NULL);
	if (!c)
		return (NULL);
	if (!(buff = clean_str(s, c)))
		return (NULL);
	
	if (!(ret = tab_alloc(buff, c)))
		return (NULL);
	return (ret);
}

//////////////////////////// make split && ./a.out "__test_" '_'