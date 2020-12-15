/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:32:01 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 12:21:08 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The bzero() function erases the data in the n bytes of the
**		memory starting at the location pointed to by s, by writ‐
**		ing zeros (bytes containing '\0') to that area.
**	RETURN VALUE
**		None.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char *s1;

	s1 = s;
	if (n)
		while (n--)
			s1[n] = 0;
}
