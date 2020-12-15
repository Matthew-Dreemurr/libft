/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:39:56 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:40 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		checks whether c is a 7-bit unsigned char value
**		that fits into the ASCII  character set.
**	RETURN VALUE
**		The values returned are nonzero if the character c
**		falls into the tested class, and zero if not.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
