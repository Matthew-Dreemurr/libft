/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:42:59 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/25 14:22:13 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_TEST 1, 2, 3, 4, 5
#define I_LEN 5

#define CHAR_TEST "abcde"
#define C_LEN 5

#include "../libft.h"
#include "test.h"

int	main()
{
	int		i_tab[] = {INT_TEST};
	int		*i_or = NULL;
	int		*i_ft = NULL;
	
	int		i;

	i_or = malloc(sizeof(int) * I_LEN);
	i_ft = malloc(sizeof(int) * I_LEN);
	
	
	memcpy(i_or, i_tab, sizeof(i_tab) * I_LEN);
	printf("int or:\n");
	for (i = 0; i < I_LEN; i++)
		printf("|%d|", i_or[i]);
	
	ft_memcpy(i_ft, i_tab, sizeof(i_tab) * I_LEN);
	printf("\n\nint ft:\n");
	for (i = 0; i < I_LEN; i++)
		printf("|%d|", i_ft[i]);


	char	c_tab[] = {CHAR_TEST};
	char	*c_or = NULL;
	char	*c_ft = NULL;
	

	c_or = malloc(sizeof(int) * C_LEN);
	c_ft = malloc(sizeof(int) * C_LEN);
	
	
	memcpy(c_or, c_tab, sizeof(c_tab) * C_LEN);
	printf("\n---------\nchar or:\n");
	for (i = 0; i < C_LEN; i++)
		printf("|%c|", c_or[i]);
	
	ft_memcpy(c_ft, c_tab, sizeof(c_tab) * C_LEN);
	printf("\n\nint ft:\n");
	for (i = 0; i < C_LEN; i++)
		printf("|%c|", c_ft[i]);
	
	return (0);
}