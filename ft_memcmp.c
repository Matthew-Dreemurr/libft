/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:23:53 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 10:32:49 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION	
**		The  memcmp()  function compares the first n bytes (each interpreted as
**		unsigned char) of the memory areas s1 and s2.
**	RETURN VALUE
**		The memcmp() function returns  an  integer  less  than,  equal  to,  or
**		greater than zero if the first n bytes of s1 is found, respectively, to
**		be less than, to match, or be greater than the first n bytes of s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;
	size_t			i;

	i = 0;
	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((cpy_s1[i] != cpy_s2[i]))
			return (cpy_s1[i] - cpy_s2[i]);
		i++;
	}
	return (0);
}
