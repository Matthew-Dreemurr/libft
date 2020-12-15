/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:28:35 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:50 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Outputs the string ’s’ to the given file descriptor.
**	RETURN VALUE
**		None.
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		while (*s)
			write(fd, s++, 1);
}
