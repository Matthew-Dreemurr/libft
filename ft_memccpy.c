/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:37:15 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 12:24:44 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The  memccpy()  function copies no more than n bytes
**		from memory area src to memory area
**		dest, stopping when the character c is found.
**		If the memory areas overlap, the results are undefined.
**	RETURN VALUE
**		The memccpy() function returns a pointer to the next
**		character in dest after c, or  NULL
**		if c was not found in the first n characters of src.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*s1;
	const unsigned char		*s2;

	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	while (n--)
	{
		*s1 = *s2;
		s1++;
		if (*s2 == (unsigned char)c)
			return (s1);
		s2++;
	}
	return (NULL);
}
