/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:36:36 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/18 14:31:49 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_isdigit.c"
#include "ft_isalpha.c"
#include "ft_isprint.c"

#include <stdio.h>
#include <stdlib.h>

/*
int	ft_atoi(const char *c)
{
	int	i;
	int	neg;
	int	ret;
	int	check;

	i = 0;
	neg = 1;
	ret = 0;
	check = 0;
	while (c[i])
	{
		if (ft_isdigit(c[i]))
			check++;
		if ((c[i] == '-' || c[i] == '+') && !ft_isdigit(c[i + 1]) && !check)
			return (101);
		if ((ft_isprint(c[i]) && ft_isdigit(c[i + 1])) && !(c[i] == '-' || c[i] == '+') && !check)
			return (202);
		if (c[i] == '-')
			neg *= -1;
		if (check)
		{
			if (ft_isdigit((int)c[i]))
			{
				ret *= 10;
				ret += (int)c[i] - '0';
			}
			if (!ft_isdigit(c[i + 1]))
				return (303);
		}
		i++;
		printf("i\n");
	}
	return (ret * neg);
}
*/


/*[TEST]*/
int main(int ac, char **ag)
{
	if (ac < 2)
		return (0);
	printf("[ok? %d] \"%s\" [or: %d ft: %d]\n", (atoi(ag[1]) == ft_atoi(ag[1])), ag[1], atoi(ag[1]), ft_atoi(ag[1]));
	return (0);
}

/*
		if ((ft_isprint(c[i]) && !ft_isdigit(c[i])) && !(c[i] == '+' || c[i] == '-'))
			return (303);
*/