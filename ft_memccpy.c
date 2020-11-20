/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:37:15 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/20 16:49:09 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*csrc;
	unsigned char		*cdest;
	unsigned char		find;

	find = c;
	cdest = dest;
	csrc = src;
	while (n--)
	{
		if (*csrc == find)
			return (cdest);
		*cdest++ = *csrc++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* msg = "This is the string: not copied";

int main( void )
{
    char buffer[80];

    memset( buffer, '\0', 80 );
    ft_memccpy( buffer, msg, ':', 80 );

    printf( "%s\n", buffer );
    
    return EXIT_SUCCESS;
}