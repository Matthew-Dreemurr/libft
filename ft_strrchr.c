/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:28:44 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 12:34:17 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The strrchr() function returns a pointer to the last occurrence of
**		the character c in the string s.
**	RETURN VALUE
**		The strrchr() function return a pointer to the matched character
**		or NULL if the  character  is  not  found.
**		The terminating null byte is considered part of the string,
**		so that if c is specified as '\0',
**		these functions return a pointer to the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*cpy_c;

	cpy_c = (char *)s;
	cpy_c += ft_strlen(s);
	while (cpy_c != s - 1)
	{
		if (*cpy_c == (char)c)
			return (cpy_c);
		cpy_c--;
	}
	if (c)
		return (NULL);
	else
		return (cpy_c);
}
