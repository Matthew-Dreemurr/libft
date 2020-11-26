/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:54:35 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/26 14:54:47 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int main(void)
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	printf("%zu-", ft_strlcat(test, "asdf", 16));
	printf("%s\n", test);
	printf("%zu-", ft_strlcat(test, "asdf", 6));
	printf("%s\n", test);
	printf("%zu-", ft_strlcat(test, "asdf", 4));
	printf("%s\n", test);
	printf("%zu-", ft_strlcat(test, "", 16));
	printf("%s\n", test);
	printf("%zu-", ft_strlcat(test, "asdf", 0));
	printf("%s\n", test);

	printf("\n\n4-asdf\n8-asdfa\n8-asdfa\n5-asdfa\n4-asdfa\n");
}