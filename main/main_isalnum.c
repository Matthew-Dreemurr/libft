/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:21:34 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/25 12:22:35 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int		main(int ac, char **ag)
{
	int i;
	i = 1;
	
	if (ac < 2)
		return (printf("[isalnum] Error"));
	for (i = 1; i < ac; i++)
		printf("[%c]\nok ? [%d]\nor: [%d] ft: [%d]\n\n",ag[i][0], (ft_isalnum((int)ag[i][0]) == isalnum((int)ag[i][0])), ft_isalnum((int)ag[i][0]), isalnum((int)ag[i][0]));
	return (0);

}