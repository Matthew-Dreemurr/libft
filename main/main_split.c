/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:00:12 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/16 10:46:19 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int		main(int ac, char **ag)
{
	char	**test;
	int		i;
	
	i = 0;
	if (ac < 0)
		return (printf("[split] Error\n"));
printf("\n\n\n------------\n");
	if (!(test = ft_split(ag[1], ag[2][0])))
		return (printf("FAIL\n"));
printf("\n\n\n------------\n");
	while (test[i])
	{
		printf("|%s|\n", test[i]);
		i++;
	}
printf("\n\n\n------------\n");
	free(test);
	return (printf("SUCCESS\n"));
}