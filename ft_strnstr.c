/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:57:49 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 12:04:41 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; oth‐
**		erwise a pointer to the first character of the first occurrence of little is returned.
**	RETURN VALUE
**		If	little is an empty string, big is returned; if little occurs nowhere
**		in	big, NULL is returned; otherwise a pointer to the first	character of
**		the first occurrence of little is returned.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	b_len;
	size_t	l_len;

	b_len = ft_strlen(big);
	l_len = ft_strlen(little);
	ret = (char *)big;
	i = 0;
	if (big == little)
		return (ret);
	if (b_len < l_len)
		return (NULL);
	if ((b_len && !l_len) || !b_len)
		return (ret);
	while (l_len < len)
	{
		if (!ft_strncmp(big + i, little, l_len))
			return (ret);
		ret++;
		len--;
		i++;
	}
	return (NULL);
}
