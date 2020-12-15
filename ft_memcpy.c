/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:24:00 by mhadad            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/15 13:33:41 by mhadad           ###   ########.fr       */
=======
/*   Updated: 2020/12/15 13:15:45 by mhadad           ###   ########.fr       */
>>>>>>> c2b7e5f3dc973c1ccb93c49122a6aaf5466d2193
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
