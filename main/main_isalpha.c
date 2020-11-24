/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:19:15 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/24 17:35:45 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int main()
{
	char	tab[] = {'#', 'F', '^', '4', 'g'};
	int		a;

		printf("isalpha");
	for (a = 0; a < 5; a++)
		printf("%d [ft: %d, or: %d]\n", (ft_isalpha((int)tab[a]) == isalpha((int)tab[a])), ft_isalpha((int)tab[a]), isalpha((int)tab[a]));
	
	return (0);
}