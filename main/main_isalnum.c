/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:21:34 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/24 17:35:33 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int		main()
{
	char	tab[] = {'!', '3', '2', '4', 'E'};
	int		a;

	printf("isalnum");
	for (a = 0; a < 5; a++)
		printf("%d [ft: %d, or: %d]\n", (ft_isalnum((int)tab[a]) == isalnum((int)tab[a])), ft_isalnum((int)tab[a]), isalnum((int)tab[a]));
	return (0);

}