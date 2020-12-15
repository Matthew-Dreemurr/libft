/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:53:25 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 12:33:16 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		The  calloc() function  allocates memory for an array of nmemb
**		elements of size bytes each and returns a pointer to the
**		allocated memory.
**		The memory is set to zero.
**	RETURN VALUE
**		The calloc() functions  return a pointer to the allocated memory
**		On error, return NULL.
**		NULL may also be returned by a successful call to calloc()
**		with nmemb or size equal to zero.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *str;

	if (!(str = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(str, (size * nmemb));
	return (str);
}
