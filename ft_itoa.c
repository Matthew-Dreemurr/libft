/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:19:23 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/04 12:45:03 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "main/test.h"

char		*exception(int n)
{
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 2147483647)
		return ("2147483647");
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
	printf("\nsize: %d\n", size);
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		size;
	int		isneg;

	if ((ret = exception(n)))
		return (ret);
	isneg = 0;
	size = check_len(n);
	if (n < 0)
	{
		n *= -1;
		isneg++;
	}
	printf("isneg: %d\n", isneg);
	if (!(ret = malloc(size)))
		return (NULL);
	ft_bzero(ret, size);
	if (isneg)
		*ret = '-';
	while (n)
	{
		ret[--size + isneg] = (n % 10) + '0';
		n /= 10;
	}
	return (ret);
}