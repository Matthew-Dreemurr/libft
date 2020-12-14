/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:32:51 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/14 17:28:24 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		isdigit()
**		checks for a digit (0 through 9).
**	RETURN VALUE
**		The values returned are nonzero if the character c falls into the tested class, and zero if not.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
