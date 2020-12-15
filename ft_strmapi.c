/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 14:23:17 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 11:53:21 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Applies the function ’f’ to each character of the
**		string ’s’ to create a new string (with malloc(3))
**		resulting from successive applications of ’f’.
**	RETURN VALUE
**		The string created from the successive applications
**		of ’f’. Returns NULL if the allocation fails.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*buff;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(buff = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_bzero(buff, len + 1);
	while (i < len)
	{
		buff[i] = f(i, s[i]);
		i++;
	}
	return (buff);
}
