/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:44:24 by mhadad            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/12/15 13:34:01 by mhadad           ###   ########.fr       */
=======
/*   Updated: 2020/12/15 13:15:49 by mhadad           ###   ########.fr       */
>>>>>>> c2b7e5f3dc973c1ccb93c49122a6aaf5466d2193
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char tmp;

	if (n == MIN_INT)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		tmp = 0;
		tmp = n % 10;
		tmp += '0';
		n /= 10;
		if (n > 0)
			ft_putnbr_fd(n, fd);
		write(fd, &tmp, 1);
	}
}
