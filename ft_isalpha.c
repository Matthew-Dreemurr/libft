/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:19:12 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:39 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		isalpha() checks  for an alphabetic character;
**		In some locales, there may be additional  charac‐
**		ters  for  which isalpha() is true—letters which are
**		neither uppercase nor lowercase.
**	RETURN VALUE
**		The values returned are nonzero if the character c falls into the
**		tested class, and zero if not.
*/

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
