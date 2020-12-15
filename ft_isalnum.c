/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 23:02:16 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 12:22:14 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		isalnum() checks for an alphanumeric character;
**		it is equivalent to (isalpha(c) || isdigit(c)).
**	RETURN VALUE
**		The values returned are nonzero if the character c falls
**		into the tested class, and zero if not.
*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
