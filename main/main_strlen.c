/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:23:25 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/25 15:38:58 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int		main(int ac, char **ag)
{
	if (ac < 2)
		return (printf("[strlen] Error"));
	printf("%d [ft: %lu, or: %lu]\n", (ft_strlen(ag[1]) == strlen(ag[1])), ft_strlen(ag[1]), strlen(ag[1]));
	return (0);
}