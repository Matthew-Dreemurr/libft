/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:39:56 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/17 13:26:55 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*[TEST]
int main()
{
	int		a;

	for (a = 0; a < 130; a++)
		printf("[%d] %d =? [ft: %d, or: %d]\n", a, (ft_isascii(a) == isascii(a)), ft_isascii(a), isascii(a));
	return (0);
}*/