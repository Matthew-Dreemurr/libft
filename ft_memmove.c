/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:50:46 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:46 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The  memmove() function copies n bytes from memory area src to
**		memory area dest.  The memory areas may overlap: copying takes  place
**		as  though  thebytes in src are first copied into a temporary
**		array that does not overlap src or dest, and the bytes are
**		then copied from  the  temporary  array  to dest.
**	RETURN VALUE
**		The memmove() function returns a pointer to dest.
**	[---src---]
**		[---dst---]
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	s = src;
	d = dst;
	if (src == dst)
		return (dst);
	if (src > dst)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		while (--len + 1)
			d[len] = s[len];
	return (dst);
}
