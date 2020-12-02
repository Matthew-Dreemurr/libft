/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:56:51 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/02 20:41:05 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	char	*s1;

	s1 = (char *)s;
	if (!(buff = malloc(sizeof(buff) * len + 1)))
		return (NULL);
	ft_bzero(buff, len);
	if (start >= ft_strlen(s))
		return (buff);
	while (start--)
		s1++;
	ft_memcpy(buff, s1, len);
	return (buff);
}
