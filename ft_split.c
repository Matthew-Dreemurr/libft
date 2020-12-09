/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:39:30 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/09 15:27:28 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "main/test.h"

#define DEBUG(num) printf("-----------[DEBUG %s]---------\n", num);


	md_alloccpy(char const *buff, char c);

char	*md_clean(char const *s, char c)
{
	char	set[2];

DEBUG("1");
	ft_bzero(set, 2);
	set[0] = c;
	return (ft_strtrim(s, set));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	*buff;
//	char	**ret;

	if (!s)
		return (NULL);
//	ft_strtrim pour éviter de séparer du vide
DEBUG("0");
	if (!(buff = md_clean(s, c)))
		return (NULL);
	printf("\nbuff clean: |%s|\n", buff);
DEBUG("2");
	md_alloccpy(buff, c);
DEBUG("3");
	





//	free(buff);
	return (NULL);
}