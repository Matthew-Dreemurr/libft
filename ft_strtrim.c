/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:04:45 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/06 18:28:38 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
char		*check_start(const char *s1, const char *s2)
{
	size_t	i;
	size_t	y;
	char	*ret;
	char	*tmp;

	ret = NULL;
	i = 0;
	y = 0;
	while (404)
	{
		while (s1[i] == s2[y])
			y++;
	}
	return (ret);
}

//size_t		check_end(const char *s1, const char *s2)
//{
//
//}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buff;
	size_t	len;
//	size_t	skip;
//	size_t	hend;
//	size_t	start;
	
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	if (!(buff = malloc(len + 1)))
		return (NULL);
	printf("bzero\n");
	ft_bzero(buff, len + 1);
	printf("check\n");
	buff = check_start(s1, set);
//	if ((skip = check_end(buff, set)) > 0)
//	{
//		ft_bzero(buff + skip, ft_strlen(buff) );
//	}
	printf("|%s|", buff);

	return (buff);
}