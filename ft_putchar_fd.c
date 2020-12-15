/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:17:35 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/15 13:15:47 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Outputs the character ’c’ to the given file descriptor.
**	RETURN VALUE
**		None.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
