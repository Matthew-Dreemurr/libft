/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:55:40 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/02 14:59:24 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int	main(int ac, char **av)
{
	if (ac < 2)
		printf("[putchar_fd]: Error 404");
	int	tmp;
	tmp = ft_atoi(av[1]);
	ft_putnbr_fd(tmp, 1);
}