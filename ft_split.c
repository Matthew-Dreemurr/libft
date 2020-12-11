/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:39:30 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/11 16:00:27 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	md_sepcount(const char *buff, int sep)
{
	size_t	i;
	size_t	ret;

	i = 0;
	ret = 0;
	while (buff[i])
	{
		if (buff[i] != sep)
		{
			while (buff[i] != sep && buff[i])
				i++;
			ret++;
		}
		i++;
	}
	return (ret);
}

char	**md_alloccpy(char const *buff, char set)
{
	size_t	len;
	size_t	check;
	size_t	index;
	char	**ret;

	index = 0;
	check = 0;
	len = md_sepcount(buff, set);
	ret = malloc(sizeof(char *) * (len + 1));
	ft_bzero(ret, sizeof(char *) * (len + 1));
	while (buff[check])
	{
		len = 0;
		while (buff[check] == set && buff[check])
			check++;
		while (buff[len + check] != set && buff[len + check])
			len++;
		if (!(ret[index] = malloc(sizeof(char) * (len + 1))))
			return (NULL);
		if (!(ret[index] = ft_substr(buff, check, len)))
			return (NULL);
		index++;
		check += len;
	}
	return (ret);
}

char	*md_clean(char const *s, char c)
{
	char	set[2];

	ft_bzero(set, 2);
	set[0] = c;
	return (ft_strtrim(s, set));
}

char	**ft_split(char const *s, char c)
{
	char	*buff;
	char	**ret;

	if (!s)
		return (NULL);
	if (!(buff = md_clean(s, c)))
		return (NULL);
	if (!(ret = md_alloccpy(buff, c)))
		return (NULL);
	free(buff);
	return (ret);
}
