/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:30:03 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:16:03 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		If c is a lowercase  letter,  toupper()  returns  its  uppercase
**		equivalent, if an uppercase representation exists in the current
**		locale.  Otherwise, it returns c.
**	RETURN VALUE
**		The  value returned is that of the converted letter, or c if the
**		conversion was not possible.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
