/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:39:30 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/16 14:28:13 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// [TEST] //
#include "libft.h"
//#include "main/test.h"
// make split && ./a.out ___ABC_D__EF_G_H__ _

char			**md_cpy(char const *s, char c, char **ret, size_t word)
{
printf("-----[start md_cpy]-----\n");
	size_t	index;
	size_t	len;
	size_t	i;

	i = 0;
	index = 0;
		while (s[i] && index < word)
		{
			len = 0;
			if (s[i] != c)
			{
				while (s[i + len] != c && s[i + len])
					len++;
				if (!(ret[index] = ft_substr(s, i, len)))
					return (NULL);
//printf("----[while: ret:|%s|]----\n", ret[index]);
//printf("[while: s:|%c| len: |%lu|, index: %lu]\n", s[i], len, index);
				index++;
			}
			i += len + 1;
		}
	return (ret);
}

size_t			md_wordcount(char const *s, char c)
{
//printf("-----[start md_wordcount]-----\n");
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
		if (*s)
			s++;
//printf("[while: *s:|%c| word: |%lu|]\n", *s, word);
	}
	return (word);
}

char			**ft_split(char const *s, char c)
{
//printf("-----[start split s: |%s|, c: |%c|]-----\n", s, c);
	char	**ret;
	size_t	word;

	if (!s || !c)
		return (NULL);
	word = md_wordcount(s, c);
//printf("-----[end wordcount word: %lu]------\n\n", word);
	if (!(ret = malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	ft_bzero(ret, sizeof(char *) * (word + 1));
	if (!(ret = md_cpy(s, c, ret, word)))
	{
		while (word)
			free(ret[word--]);
		free(ret);
		return (NULL);
	}
	return (ret);
}
