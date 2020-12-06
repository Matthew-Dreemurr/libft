/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:04:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/06 22:20:52 by mhadad           ###   ########.fr       */
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
	printf("malloc\n");
	ft_bzero(buff, len + 1);
	printf("bzero\n");
	printf("while\n");
	while (s1[start])
	{
		printf("while start: %d\n", start);
		if (!(check_set_start(*s1, set)))
			break;
		start++;
	}
	printf("while 2\n");
//	while (len--)
//	{
//		if (!(check_set_start(*s1, set)))
//			break;
//		start++;
//	}
	printf("substr\n");
	if (!(buff = ft_substr(s1, start, len)))
		return (NULL);
	printf("|%s|", buff);

	return (buff);
}

make strtrim && ./a.out aabcde a