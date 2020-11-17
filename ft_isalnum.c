/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 23:02:16 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/17 13:27:01 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*[TEST]*/
int		main()
{
	char	tab[] = {'!', '3', '2', '4', 'E'};
	int		a;

	for (a = 0; a < 5; a++)
		printf("%d [ft: %d, or: %d]\n", (ft_isalnum((int)tab[a]) == isalnum((int)tab[a])), ft_isalnum((int)tab[a]), isalnum((int)tab[a]));
	return (0);

}