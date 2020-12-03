/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:05:00 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/03 12:11:56 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	main(int ac, char **ag)
{
	if (ac < 2)
		return (printf("[strtrim] Error"));
	printf("|%s|", ft_strtrim(ag[1], ag[2]));
	return (0);
}