/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 09:51:37 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/23 10:59:34 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (c ? NULL : cpy_c);
}
