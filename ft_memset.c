/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:04:19 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 10:42:56 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The  memset()  function fills the first n bytes of the memory area pointed
**		to by s with the constant byte c.
**	RETURN VALUE
**		The memset() function returns a pointer to the memory area s.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = b;
	while (len--)
	{
		*str++ = (unsigned char)c;
	}
	return (b);
}
