/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:11:15 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/25 15:19:56 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

#define SIZE	5
#define C		'5'
#define MM_SIZE	5

int	main()
{
	char	*or_tab;
	char	*ft_tab;

	or_tab = malloc(sizeof(char) * SIZE);
	ft_tab = malloc(sizeof(char) * SIZE);
	memset(or_tab, C, MM_SIZE);
	printf("or: |%s|", or_tab);
	
	ft_memset(or_tab, C, MM_SIZE);
	printf("\n\nft: |%s|", or_tab);


	return (0);
}