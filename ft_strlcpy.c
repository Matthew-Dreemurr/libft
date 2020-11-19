/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:38:34 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/19 15:28:21 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy( char *dst, const char *src, size_t siz)
{
	int	i;

	i = 0;
	while (i < siz - 1)
	{
		if (!siz)
			break;
		dst[i] = src[i];
		i++;
	}
	if (siz)
		dst[i] = '\0';
	return (ft_strlen(src));
}

int		main()
{
char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
printf("%d-", ft_strlcpy(test, "asdf", 16));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "uiop", 0));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "qwerty", 4));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "", 4));
printf("%s\n", test);
}