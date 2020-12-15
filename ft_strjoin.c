/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:22:19 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:53 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Allocates (with malloc(3)) and returns a new
**		string, which is the result of the concatenation of ’s1’ and ’s2’.
**	RETURN VALUE
**		The new string. NULL if the allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(buff = malloc(sizeof(buff) * (len_s1 + len_s2 + 1))))
		return (NULL);
	ft_bzero(buff, len_s1 + len_s2 + 1);
	ft_strlcat(buff, s1, len_s1 + 1);
	ft_strlcat(buff, s2, len_s1 + len_s2 + 1);
	return (buff);
}
