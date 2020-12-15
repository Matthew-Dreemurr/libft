/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:02:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 12:25:03 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The  memchr()  function scans the initial n bytes of
**		the memory area pointed to by s for
**		the first instance of c.  Both c and the bytes of the
**		memory area pointed to  by  s  are
**		interpreted as unsigned char.
**	RETURN VALUE
**		The  memchr()  function return a pointer to the matching byte or NULL if
**		the character does not occur in the given memory area.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy_s;

	cpy_s = (unsigned char*)s;
	while (n--)
	{
		if (*cpy_s == (unsigned char)c)
			return (cpy_s);
		cpy_s++;
	}
	if (c)
		return (NULL);
	else
		return (cpy_s);
}
