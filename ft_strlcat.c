/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:58:46 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/19 17:10:24 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;

	len_dst = ft_strlen(dest);
	i = 0;
	while (i < size - 1)
	{
		if (!size)
			break;
		dest[i + len_dst] = src[i];
		i++;
	}
	if (size < ft_strlen(dest))
		dest[i] = '\0';
	return (len_dst + ft_strlen(src));
}

int main(void)
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	printf("%d-", ft_strlcat(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 6));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 0));
	printf("%s\n", test);

	printf("\n\n4-asdf\n8-asdfa\n8-asdfa\n5-asdfa\n4-asdfa\n");
}