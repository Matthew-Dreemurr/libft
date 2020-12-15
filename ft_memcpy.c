/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:24:00 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:45 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The  memcpy()  function  copies n bytes from
**		memory area src to memory area dest.
**		The memory areas must not overlap.
**	RETURN VALUE
**		The memcpy() function returns a pointer to dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;

	if (dest == src)
		return (dest);
	cdest = (unsigned char *)dest;
	csrc = (const unsigned char *)src;
	while (n--)
		cdest[n] = csrc[n];
	return (dest);
}
