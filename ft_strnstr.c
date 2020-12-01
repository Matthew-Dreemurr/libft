/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:57:49 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/01 14:55:19 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*ret;
	size_t	b_len;
	size_t	l_len;

	b_len = ft_strlen(big);
	l_len = ft_strlen(little);
	ret = (char *)big;
	i = 0;
	if (big == little)
		return (ret = (char *)big);
	if (b_len < l_len)
		return (NULL);
	if ((b_len && !l_len) || !b_len)
		return (ret = (char *)big);
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
