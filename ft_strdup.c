/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:42:51 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/12 08:43:34 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *s2;

	if (!(s2 = (malloc(sizeof(char) * (ft_strlen(s) + 1)))))
		return (NULL);
	ft_memcpy(s2, s, ft_strlen(s) + 1);
	return (s2);
}
