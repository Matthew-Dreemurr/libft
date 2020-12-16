/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:39:30 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/16 13:26:51 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**md_cpy(char const *s, char c, char **ret, size_t word)
{
	size_t	index;
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	index = 0;
		while (s[i] && index < word)
		{
			if (s[i] != c)
			{
				while (s[i + len] != c && s[i + len])
					len++;
				if (!(ret[index] = ft_substr(s, i, len)))
					return (NULL);
				index++;
			}
			i += len;
			i++;
			len = 0;
		}
	return (ret);
}

size_t			md_wordcount(char const *s, char c)
{
	size_t	word;

	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			word++;
		}
		s++;
	}
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	word;

	if (!s || !c)
		return (NULL);
	word = md_wordcount(s, c);
	if (!(ret = malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	ft_bzero(ret, word + 1);
	if (!(ret = md_cpy(s, c, ret, word)))
	{
		while (word)
			free(ret[word--]);
		free(ret);
		return (NULL);
	}
	return (ret);
}
