/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:38:02 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/26 16:00:45 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

#define SIZE 2
#define CURSOR 5

int main( void )
{
	char test[80] = {"test destroyed stuff"};

	printf("|%s|\n", test);
	ft_bzero(test + CURSOR, SIZE);
	printf("|%s|\n", test);
	return (0);
}