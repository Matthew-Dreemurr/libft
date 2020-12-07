/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:04:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/07 15:56:07 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
int		check_set_start(char c, const char *set)
{
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
	char		*buff;
	size_t		len;
	size_t		start;
	
	if (!s1)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	if (!(buff = malloc(len + 1)))
		return (NULL);
	ft_bzero(buff, len + 1);
	while (s1[start])
	{
		printf("check_start s1: %c\n", s1[start]);
		printf("check_start len: %ld\n", start);
		if (!(check_set_start(s1[start], set)))
			break;
		start++;
	}
	printf("\n\n");
	if (!(buff = ft_substr(s1, start, len)))
		return (NULL);
	printf("buff: %s\n", buff);
	len = ft_strlen(buff);
	start = 0;
	while (s1[start])
	{
		printf("check_end s1: %c\n", s1[start]);
		printf("check_end start: %ld\n", start);
		if ((check_set_start(buff[start], set)))
			break;
		start++;
	}
	if (!(buff = ft_substr(buff, 0, len - start)))
		return (NULL);

	return (buff);
}

