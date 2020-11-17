/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:05:02 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/17 13:26:46 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		s[i++];
	return (i);
}

/*[TEST]
int		main()
{
	char	tab[] = {"123456"};
	int		a;

	printf("%d [ft: %d, or: %d]\n", (ft_strlen(tab) == strlen(tab)), ft_strlen(tab), strlen(tab));
	return (0);

}*/