/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:09:43 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 11:55:50 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The strncmp() function compares the two strings s1 and s2,
**		except it compares only the first (at most) n bytes of s1 and s2.
**	RETURN VALUE
**		The  strcmp() and strncmp() functions return an integer less than, equal to, or greater than zero if
**		s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or  be  greater
**		than s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;
	size_t			i;

	i = 0;
	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((!cpy_s1[i] || cpy_s1[i] != cpy_s2[i]))
			return (cpy_s1[i] - cpy_s2[i]);
		i++;
	}
	return (0);
}
