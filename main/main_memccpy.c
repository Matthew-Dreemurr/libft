/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:22:01 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/26 14:33:50 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_TEST 1, 2, 3, 4, 5
#define I_LEN 5
#define I_C 3

#define CHAR_TEST "abcde"
#define C_LEN 5
#define C_C 'c'

#include "../libft.h"
#include "test.h"

int	main()
{
	int		i_tab[] = {INT_TEST};
	int		*i_or = NULL;
	int		*i_ft = NULL;
	
	int		i;

	if (!((i_or = malloc(sizeof(int) * I_LEN)) && (i_ft = malloc(sizeof(int) * I_LEN))))
		return (printf("Error malloc i"));
	
	memccpy(i_or, i_tab, I_C, sizeof(i_tab) * I_LEN);
	printf("int or:\n");
	for (i = 0; i < I_LEN; i++)
		printf("|%d|", i_or[i]);
	
	ft_memccpy(i_ft, i_tab, I_C, sizeof(i_tab) * I_LEN);
	printf("\n\nint ft:\n");
	for (i = 0; i < I_LEN; i++)
		printf("|%d|", i_ft[i]);


	char	c_tab[] = {CHAR_TEST};
	char	*c_or = NULL;
	char	*c_ft = NULL;
	

	if (!((c_or = malloc(sizeof(char) * C_LEN)) && (c_ft = malloc(sizeof(char) * C_LEN))))
		return (printf("Error malloc c"));
	
	
	memccpy(c_or, c_tab, C_C, sizeof(c_tab) * C_LEN);
	printf("\n---------\nchar or:\n");
	for (i = 0; i < C_LEN; i++)
		printf("|%c|", c_or[i]);
	
	ft_memccpy(c_ft, c_tab, C_C, sizeof(c_tab) * C_LEN);
	printf("\n\nint ft:\n");
	for (i = 0; i < C_LEN; i++)
		printf("|%c|", c_ft[i]);
	
	free (i_or);
	free (i_ft);
	free (c_or);
	free (c_ft);
	return (0);
}