/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_return.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:48:17 by mhadad            #+#    #+#             */
/*   Updated: 2021/03/17 13:56:36 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**   Will return the pointed adresse en return `ret`. (Free)
**
**   @param  `addr`   Pointer to the adresse to free.
**   @param  `ret`    Value will be return.
**
**   @return  `ret`.
*/

int			free_return(void **addr, int ret)
{
	if (addr && *addr)
	{
		free(*addr);
		*addr = NULL;
	}
	return (ret);
}
