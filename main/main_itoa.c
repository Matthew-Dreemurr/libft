/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:26:16 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/04 10:55:25 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int	main(int ac, char **ag)
{
	(void)ag;
	if (ac < 2)
		return (printf("[itoa]: Error"));
	printf("\n|%s|", ft_itoa(atoi(ag[1])));
	return (0);
}