/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:11:16 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/06 17:14:26 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"
#include "test.h"

int		main(int ac, char **ag)
{
	if (ac < 2)
		return (printf("[isdigit] Error"));

	ft_strtrim(ag[1], ag[2]);
}