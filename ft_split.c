/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:39:30 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/16 11:17:50 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// [TEST] //
#include "libft.h"
#include "main/test.h"
// make split && ./a.out ___ABC_D__EF_G_H__ _

char			**md_cpy(char const *s, char c, char **ret, size_t word)
{
printf("-----[start md_cpy]-----\n");
	size_t	index;
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	index = 0;
	while (index < word)
	{
		while (s[i] && index < word)
		{
			if (s[i] != c)
			{
				while (s[i + len] != c && s[i + len])
					len++;
				ret[index] = ft_substr(s, i, len);
printf("----[while: ret:|%s|]----\n", ret[index]);
				index++;
			}
printf("[while: s:|%c| len: |%lu|, index: %lu]\n", s[i], len, index);
			i += len;
			i++;
			len = 0;
		}
	}
	return (ret);
}

size_t			md_wordcount(char const *s, char c)
{
printf("-----[start md_wordcount]-----\n");
	size_t	word;

	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c)
				s++;
			word++;
		}
		s++;
printf("[while: *s:|%c| word: |%lu|]\n", *s, word);
	}
	return (word);
}

char			**ft_split(char const *s, char c)
{
printf("-----[start split s: |%s|, c: |%c|]-----\n", s, c);
	char	**ret;
	size_t	word;
	int							i;

	i = 0;

	if (!s || !c)
		return (NULL);
	word = md_wordcount(s, c);
printf("-----[end wordcount word: %lu]------\n", word);
	if (!(ret = malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	ft_bzero(ret, word + 1);
	ret = md_cpy(s, c, ret, word);
	
		while (ret[i])
		{
			printf("|%s|\n", ret[i]);
			i++;
		}

	return (ret);
}
