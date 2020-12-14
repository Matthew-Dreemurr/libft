/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:19:12 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/14 17:25:34 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		isalpha() checks  for an alphabetic character; in the standard "C" locale, it is equivalent
**		to (isupper(c) || islower(c)).  In some locales, there may be additional  charac‐
**		ters  for  which isalpha() is true—letters which are neither uppercase nor lowercase.
**	RETURN VALUE
**		The values returned are nonzero if the character c falls into the tested class, and zero if not.
*/

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
