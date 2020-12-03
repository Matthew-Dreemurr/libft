/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:36:49 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/03 09:50:39 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int	main(int ac, char **ag)
{
	if (ac < 2)
		return (printf("[strjoin]: Error"));
	char	*test;

	test = ft_strjoin(ag[1], ag[2]);
	printf("\n|%s|", test);
	free(test);
	return (0);
}