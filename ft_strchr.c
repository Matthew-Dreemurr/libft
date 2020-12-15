/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 09:51:37 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 12:33:44 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The  strchr()  function  returns  a pointer to
**		the first occurrence of the
**		character c in the string s.
**	RETURN VALUE
**		The strchr() function return a pointer to
**		the matched character or NULL if the character is
**		not found.  The terminating null byte is
**		considered part of the string, so that if c is
**		specified  as  '\0',  these
**		functions return a pointer to the terminator.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*cpy_c;

	cpy_c = (char *)s;
	while (*cpy_c)
	{
		if (*cpy_c == (char)c)
			return (cpy_c);
		cpy_c++;
	}
	if (c)
		return (NULL);
	else
		return (cpy_c);
}
