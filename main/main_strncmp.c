/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:39:14 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/25 16:54:52 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

#define TEXT1	"test"
#define TEXT2	"testss"
#define LEN		7

int	main()
{
	char	tab[] = {TEXT1};
	char	test[] = {TEXT2};

	printf("or: %d\n", strncmp(tab, test, LEN));
	printf("ft: %d\n", ft_strncmp(tab, test, LEN));
	return (0);
}