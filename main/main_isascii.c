/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:21:58 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/24 17:36:03 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int main()
{
	int		a;

	printf("isascii");
	for (a = 0; a < 130; a++)
		printf("[%d] %d =? [ft: %d, or: %d]\n", a, (ft_isascii(a) == isascii(a)), ft_isascii(a), isascii(a));
	return (0);
}