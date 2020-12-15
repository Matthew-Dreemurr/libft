/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:37:15 by mhadad            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/15 13:33:27 by mhadad           ###   ########.fr       */
=======
/*   Updated: 2020/12/15 13:15:43 by mhadad           ###   ########.fr       */
>>>>>>> c2b7e5f3dc973c1ccb93c49122a6aaf5466d2193
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
