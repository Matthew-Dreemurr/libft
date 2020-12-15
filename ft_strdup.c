/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:42:51 by mhadad            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/15 13:34:25 by mhadad           ###   ########.fr       */
=======
/*   Updated: 2020/12/15 13:15:53 by mhadad           ###   ########.fr       */
>>>>>>> c2b7e5f3dc973c1ccb93c49122a6aaf5466d2193
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
