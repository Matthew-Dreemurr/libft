/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:56:11 by mhadad            #+#    #+#             */
/*   Updated: 2021/03/17 13:56:28 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**   Will return a string with all caractere precede the first newline occured
**    and will remove those character form `str`. (Malloc)
**
**   @param  `str`  Pointer of adresse.
*/

char		*next_line(char **str)
{
	ssize_t	len;
	ssize_t	i;
	char	*ret;
	char	*str_cpy;

	i = 0;
	len = lentochar(*str, '\n', 1);
	if (!(lentochar(*str, '\n', 2)))
		return (join_str(*str, NULL, NULL));
	if (!(ret = (char*)malloc(len + 1)))
		return (NULL);
	str_cpy = *str;
	ret[len] = '\0';
	while (len > i)
		ret[i++] = *str_cpy++;
	str_cpy++;
	len = 0;
	while (*str_cpy)
		(*str)[len++] = *str_cpy++;
	(*str)[len] = '\0';
	return (ret);
}
