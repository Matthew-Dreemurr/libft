/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:22:16 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/24 17:22:23 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char	tab[] = {'e', '3', '2', '4', 'E'};
	int		a;
	for (a = 0; a < 5; a++)
		printf("%d [ft: %d, or: %d]\n", (ft_isdigit((int)tab[a]) == isdigit((int)tab[a])), ft_isdigit((int)tab[a]), isdigit((int)tab[a]));
	return (0);
}