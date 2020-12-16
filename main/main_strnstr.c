/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:08:49 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/01 11:48:28 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int	main(int ac, char **ag)
{
	char	*b;
	char	*l;
	char	*or_ret;
	char	*ft_ret;
	size_t	len;

	if (ac < 2)
		printf("%s big little, len", ag[0]);
	b = ag[1];
	l = ag[2];
	len = atoi(ag[3]);

	ft_ret = ft_strnstr(b, l, len);
	or_ret = strnstr(b, l, len);
	printf("or: |%s|\nft: |%s|", or_ret, ft_ret);
}