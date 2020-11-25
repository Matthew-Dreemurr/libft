/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 11:39:08 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/25 12:01:01 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	main(int ac, char **ag)
{

	if (ac < 2)
		return(printf("[atoi] : Error 404"));
	printf("ok ? [%d]\nor: [%d] ft: [%d]", (atoi(ag[1]) == ft_atoi(ag[1])), atoi(ag[1]), ft_atoi(ag[1]));
}