/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:55:16 by mhadad            #+#    #+#             */
/*   Updated: 2021/03/17 13:56:32 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**   Will join s1 & s2, before return will free `s1` or `s2` if `freeS1`
**    is true. (Malloc, Free)
**
**   @param   `s1`  Fisrt string.
**   @param   `s2`  Secound strin.
**
**   @return  A string with the contatenate of s1 and s2
*/

char		*join_str(char *s1, char *s2, char **tofree)
{
	ssize_t	len_s1;
	ssize_t	len_s2;
	char	*ret;

	len_s1 = lentochar(s1, '\0', 1);
	len_s2 = lentochar(s2, '\0', 1);
	if (!(ret = (char*)malloc(len_s1 + len_s2 + 1)))
		return (NULL);
	ret[len_s1 + len_s2] = '\0';
	while (len_s2 > 0 && s2[--len_s2])
		ret[len_s1 + len_s2] = s2[len_s2];
	while (len_s1 > 0 && s1[--len_s1])
		ret[len_s1] = s1[len_s1];
	if (tofree && *tofree)
	{
		free(*tofree);
		*tofree = NULL;
	}
	return (ret);
}
