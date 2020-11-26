/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:32:00 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/26 12:32:26 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int		main(int ac, char **ag)
{
	int i;
	i = 1;
	
	if (ac < 2)
		return (printf("[toupper] Error"));
	for (i = 1; i < ac; i++)
		printf("[%c]\nok ? [%d]\nor: [%c] ft: [%c]\n\n",ag[i][0], (ft_toupper((int)ag[i][0]) == toupper((int)ag[i][0])), ft_toupper((int)ag[i][0]), toupper((int)ag[i][0]));
	return (0);

}