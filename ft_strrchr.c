/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:28:44 by mhadad            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/15 13:35:03 by mhadad           ###   ########.fr       */
=======
/*   Updated: 2020/12/15 13:16:00 by mhadad           ###   ########.fr       */
>>>>>>> c2b7e5f3dc973c1ccb93c49122a6aaf5466d2193
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
