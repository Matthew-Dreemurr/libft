/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 14:46:44 by mhadad            #+#    #+#             */
/*   Updated: 2020/11/25 15:10:41 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"
/*
	                [------src-----]
	[-----dest----]
	Salut les amis, comment ca vas ?
*/

#define C_TEST	"Salut les amis, comment ca vas ?"
#define SIZE	33
#define C_LEN	5
#define C_CUR	10
#define OR_DEST	or_void
#define FT_DEST	ft_void

int	main()
{
	char	or_tab[] = {C_TEST};
	char	*or_void = NULL;

	or_void = malloc(sizeof(char) * SIZE);
	memmove(OR_DEST, or_tab + C_CUR, C_LEN);

	printf("or: |%s|\n\n", OR_DEST);


	char	ft_tab[] = {C_TEST};
	char	*ft_void = NULL;

	ft_void = malloc(sizeof(char) * SIZE);
	ft_memmove(FT_DEST, ft_tab + C_CUR, C_LEN);

	printf("ft: |%s|", FT_DEST);

	return (0);
}