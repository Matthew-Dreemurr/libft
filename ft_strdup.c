/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:42:51 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:53 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The  strdup()  function  returns a pointer to a new string which is a
**		duplicate of the string s.  Memory for the  new  string  is  obtained
**		with malloc(3), and can be freed with free(3).
**	RETURN VALUE
**		 On success, the strdup() function returns a pointer to the duplicated
**		string.  It returns NULL if insufficient memory was  available,  with
**		errno set to indicate the cause of the error.
*/

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s);
	if (!(s2 = (malloc(sizeof(char) * len + 1))))
		return (NULL);
	ft_memcpy(s2, s, len + 1);
	return (s2);
}
