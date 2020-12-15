/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:38:34 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:55 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The strlcpy() function copy and concatenate strings respectively.
**		strlcpy() take the full size of the buffer (not just the length)
**		and guarantee to NUL-terminate the result.
**	RETURN VALUE
**		The strlcpy() function return the total length of the string
**		they tried to create. That means the length of src.
**		While this may seem somewhat confusing, it was done to
**		make truncation detection simple.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;

	if (!dst)
		return (0);
	i = 0;
	count = ft_strlen(src);
	if (!dstsize)
		return (count);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}
