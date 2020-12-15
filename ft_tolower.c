/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:52:34 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 12:12:25 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		If c is an uppercase letter,  tolower()  returns  its  lowercase
**		equivalent,  if a lowercase representation exists in the current
**		locale.  Otherwise, it returns c.
**	RETURN VALUE
**		The  value returned is that of the converted letter, or c if the
**		conversion was not possible.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
