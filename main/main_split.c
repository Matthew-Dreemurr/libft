/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:00:12 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/11 10:29:01 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int		main(int ac, char **ag)
{
	char	**test;
	int		i;

	i = 0;
	if (ac < 2)
		return (printf("[split] Error"));
	printf("\n\n\n------------\n");
	test = ft_split(ag[1], ag[2][0]);
	while (test[i])
	{
		printf("|%s|\n", test[i]);
		i++;
	}
	free(test);
	return (0);
}