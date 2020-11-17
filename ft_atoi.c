/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:36:36 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/17 14:23:42 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_isdigit.c"

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *c)
{
	int				i;
	int				neg;
	int	ret;

	i = 0;
	neg = 1;
	ret = 0;
	while (c[i])
	{
		if ((c[i] == '-' || c[i] == '+') && !ft_isdigit(c[i + 1]))
			break;
		if (c[i] == '-')
			neg *= -1;
		if (ft_isdigit)
		{
			ret *= 10;
			ret += (int)c[1] - '0';
		}
		i++;
	}
	return (ret * neg);
}

/*[TEST]*/
int main(int ac, char **ag)
{
	if (ac < 2)
		return (0);
	printf("[ok? %d] %s [or: %d ft: %d]\n", (atoi(ag[1]) == ft_atoi(ag[1])), ag[1], atoi(ag[1]), ft_atoi(ag[1]));
	return (0);
}