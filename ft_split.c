/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:39:30 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 17:54:46 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// [TEST] //
#include "libft.h"
#include "main/test.h"
#define LOG(x) printf
// ABC_D__EFG_H_

md_cpy()
{
	
}

size_t			md_wordcount(char const *s, char c)
{
printf("-----[start md_wordcount]-----\n");
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c)
				s++;
			len++;
		}
		s++;
printf("[while: *s:|%c| len: |%lu|]\n", *s, len);
	}
	return (len);
}

char			**ft_split(char const *s, char c)
{
printf("-----[start split]-----\n");
	char	**ret;
	size_t	tmp_len;
	
	if (!s || !c)
		return (NULL);
	tmp_len = md_wordcount(s, c);
printf("-----[end wordcount tmp_len: %lu]------\n", tmp_len);
	if (!(ret = malloc(sizeof(char *) * (tmp_len + 1))))
		return (NULL);
	ft_bzero(ret, tmp_len + 1);
	md_cpy();
	
	return (ret);
}
