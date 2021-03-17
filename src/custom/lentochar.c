/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lentochar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:52:02 by mhadad            #+#    #+#             */
/*   Updated: 2021/03/17 13:56:34 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**   If `mode` == 1 will return the number of caracter predece the first
**   `c` encountered.
**   If `mode` == 2 Will return bool if the `c` exist in the sting.
**
**   @param `str`    The string.
**   @param `c`      Ascii caracter.
**   @param `mode`   If 1: strlen to `c`, if 2: bool (`c` exist) ? 1 : 0.
**
**   @return
*/

ssize_t		lentochar(const char *str, int c, int mode)
{
	ssize_t	len;

	if (!str)
		return (FALSE);
	if (mode == 1)
	{
		len = -1;
		while (str[++len])
			if (str[len] == (char)c)
				break ;
		if (str[len] != (char)c)
			return (FALSE);
	}
	if (mode == 2)
	{
		len = -1;
		while (str[++len])
			if (str[len] == (char)c)
				return (TRUE);
		return (FALSE);
	}
	return (len);
}
