/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:02:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/26 14:48:41 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy_s;

	if (!s || !c)
		return (NULL);
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
