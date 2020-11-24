/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:26:22 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/24 17:33:54 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int		main()
{
	char	tab[] = {"123456"};
	int		a;
	printf("%d [ft: %d, or: %d]\n", (ft_strlen(tab) == strlen(tab)), ft_strlen(tab), strlen(tab));
	return (0);
}