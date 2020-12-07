/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:04:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/07 16:09:01 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
int		check_set(char c, const char *set)
{
	while (*set)
	{
		printf("check_set buff: %c\n", c);

		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
size_t	check_set_end(const char *buff, char const *set)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(buff);
	printf("check_end len: %ld\n", len);
	while (i < len)
	{
		printf("check_end buff: %c\n", buff[i]);
		printf("check_end len: %ld\n", i);
		if (!(check_set(buff[i], set)))
			break;
		i++;
	}
	return (i);
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
		if (!(check_set(s1[start], set)))
			break;
		start++;
	}
	printf("\n\n");
	if (!(buff = ft_substr(s1, start, len)))
		return (NULL);
	printf("buff: %s\n", buff);

	
	len = check_set_end(buff, set);
	if (!(buff = ft_substr(buff, 0, len)))
		return (NULL);

	return (buff);
}

