/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:04:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/07 12:58:54 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
int		check_set_start(char c, const char *set)
{
	printf("check_start\n");
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int		check_set_end(char c, const char *set)
{
	printf("check_end\n");
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buff;
	size_t	len;
	unsigned int	start;
	
	if (!s1)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	if (!(buff = malloc(len + 1)))
		return (NULL);
	ft_bzero(buff, len + 1);
	while (s1[start])
	{
		if (!(check_set_start(s1[start], set)))
			break;
		start++;
	}
//	while (len--)
//	{
//		if (!(check_set_start(*s1, set)))
//			break;
//		start++;
//	}
	if (!(buff = ft_substr(s1, start, len)))
		return (NULL);

	return (buff);
}

