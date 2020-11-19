/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:58:46 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/19 13:55:07 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t rep;

	i = 0;
	j = ft_strlen(dest);
	rep = ft_strlen(src);
	if (!size)
		return (rep);
	if (size <= j)
		rep += size;
	else
		rep += j;
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (rep);
}

int main(void)
{
	char dest[20] = "hello";
	char src[] = "!? test";	
	
	ft_strlcat(dest, src, 20);
	printf("%d\n", ft_strlen(dest));
	printf("%s", dest);
	
   return 0;
}