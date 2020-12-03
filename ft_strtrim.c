/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:04:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/03 14:19:53 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	skip(char const *s1, char const *set)
{
	size_t	len_set;
	size_t	check;

	len_set = ft_strlen(set);
	check = 0;
	while (s1[check] == set[check] && set[check])
	{
		check++;
		if (check == len_set)
			return (check);
	}
	return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	char	*buff;
	size_t	len;
	size_t	i;
	size_t	s_skip;

	if (!s1)
		return (NULL);
	i = 0;
	s_skip = 0;
	len = ft_strlen(s1);
	if (!(buff = malloc(len + 1)))
		return (NULL);
	ft_bzero(buff, len + 1);
	while (len-- > 0)
	{
		if (s1[s_skip] == *set)
			s_skip += skip(s1 + s_skip, set);
		buff[i] = s1[s_skip];
		i++;
		s_skip++;
	}
	return (buff);
}