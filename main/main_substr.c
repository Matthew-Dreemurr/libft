/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:06:42 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/02 18:19:15 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int	main(int ac, char **ag)
{
	if (ac < 2)
		return (printf("[substr]: Error"));
	int start = atoi(ag[2]);
	int len = atoi(ag[3]);
	char *test = ag[1];
	char *ft_test = ft_substr(test, start, len);

	printf("ft: |%s|\n", ft_test);
	free (ft_test);
	return (0);
}