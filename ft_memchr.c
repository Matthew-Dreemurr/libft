/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:02:45 by mhadad            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/15 13:33:32 by mhadad           ###   ########.fr       */
=======
/*   Updated: 2020/12/15 13:15:43 by mhadad           ###   ########.fr       */
>>>>>>> c2b7e5f3dc973c1ccb93c49122a6aaf5466d2193
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
