/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:37:15 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/18 17:10:44 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
		int		i;
	unsigned char	*cdest;
	unsigned char	*csrc;
	unsigned char	find;
	cdest = (char *)dest;
	csrc = (char *)src;
	i = -1;
	while (++i < n)
	{
		if (cdest[i] == (char)c)
			break;
		cdest[i] = csrc[i];
	}
}