/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:36:36 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/20 14:53:15 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description:
**
**
** Converts str (const char *c) into an integer,
** and returns that integer.
**
** str should start with whitespace or number,
** and will stop reading as soon as a non-numerical character has been read.
**
** If the conversion cannot be performed, then atoi will return zero.
*/

int	ft_atoi(const char *c)
{
	long long int	ret;
	int				neg;
	int				i;

	i = 0;
	ret = 0;
	neg = 1;
	while (c[i] == 32 || (c[i] >= 9 && c[i] <= 13))
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_isdigit(c[i]))
	{
		ret = ret * 10 + c[i] - '0';
		i++;
	}
	if (ret < 0)
		return (neg == 1 ? -1 : 0);
	return (ret * neg);
}
