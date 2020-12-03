/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:04:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/03 13:27:09 by mhadad           ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buff;
	size_t	len;
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	if (!(buff = malloc(len + 1)))
		return (NULL);
	while (len--)
	{
		if (s1[i] == *set)
			i += skip(s1 + i, set);
		*buff++ = s1[i];
		i++;
	}
	return (buff);
}