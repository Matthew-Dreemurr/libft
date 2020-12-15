/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:16:25 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:41 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		isprint()
**		checks for a lowercase character.
**	RETURN VALUE
**		The values returned are nonzero if the character c
**		falls into the tested class, and zero if not.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
