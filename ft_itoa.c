/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:19:23 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/04 12:58:48 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*exception(int n, char *ret)
{
	if (n == 0)
	{
		if (!(ret = malloc(11)))
			return (NULL);
		return (ret = "0");
	}
	if (n == -2147483648)
	{
		if (!(ret = malloc(11)))
			return (NULL);
		return (ret = "-2147483648");
	}
	if (n == 2147483647)
	{
		if (!(ret = malloc(11)))
			return (NULL);
		return (ret = "2147483647");
	}
	else
		return (NULL);
}

int		check_len(int n)
{
	int		size;

	size = 0;
	if (n < 0)
		n *= -1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		size;
	int		isneg;

	ret = 0;
	if ((ret = exception(n, ret)))
		return (ret);
	isneg = 0;
	size = check_len(n);
	if (n < 0)
	{
		n *= -1;
		isneg++;
	}
	if (!(ret = malloc(size + isneg + 1)))
		return (NULL);
	ft_bzero(ret, size);
	while (n)
	{
		ret[--size + isneg] = (n % 10) + '0';
		n /= 10;
	}
	if (isneg)
		*ret = '-';
	return (ret);
}
