/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:39:30 by mhadad            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/15 13:34:08 by mhadad           ###   ########.fr       */
=======
/*   Updated: 2020/12/15 13:15:51 by mhadad           ###   ########.fr       */
>>>>>>> c2b7e5f3dc973c1ccb93c49122a6aaf5466d2193
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	md_sepcount(const char *buff, int sep)
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

static char		**md_cpy(char const *buff, char set, char **ret)
{
	size_t	check;
	size_t	len;
	size_t	index;

	index = 0;
	check = 0;
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

static char		**md_alloc(char const *buff, char set)
{
	size_t	len;
	char	**ret;

	len = md_sepcount(buff, set);
	if (!(ret = malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	ft_bzero(ret, sizeof(char *) * (len + 1));
	if (!(md_cpy(buff, set, ret)))
		return (NULL);
	return (ret);
}

static char		*md_clean(char const *s, char c)
{
	char	set[2];

	ft_bzero(set, 2);
	set[0] = c;
	return (ft_strtrim(s, set));
}

char			**ft_split(char const *s, char c)
{
	char	*buff;
	char	**ret;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(buff = md_clean(s, c)))
		return (NULL);
	if (!(ret = md_alloc(buff, c)))
	{
		while (ret[i])
			free(ret[i]);
		free(ret);
		return (NULL);
	}
	free(buff);
	return (ret);
}
