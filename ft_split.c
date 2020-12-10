/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:39:30 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/10 16:37:21 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "main/test.h"

//#define DEBUG(num) printf("-----------[DEBUG %s]---------\n", num);
//#define DEBUG(txt, info) printf(txt, info);

size_t	md_sepcount(const char *buff, int sep)
{
	size_t	i; 
	size_t	ret; 

	i = 0;
	ret = 0;
	while (buff[i])
	{
		if (buff[i] != sep)
		{
			while (buff[i] != sep && buff[i])
				i++;
			ret++;
		}	
		i++;
	}
																//DEBUG("md_sepcount ret: %lu\n", ret);
	return (ret);
}

char	**md_alloccpy(char const *buff, char set)
{
	size_t	len;
	size_t	check;
	size_t	index;
	char	**ret;

	index = 0;
	check = 0;
	len = 0;
	ret = malloc(sizeof(char *) * md_sepcount(buff, set));
	while (buff[check])
	{
																					//DEBUG("md_alloccpy");
																					//DEBUG("index: %lu\n", index);
																					//DEBUG("len: %lu\n", len);
																					//DEBUG("check: %lu\n", check);
																					//printf("---------\n");
		len = 0;
		while (buff[check] == set && buff[check])
			check++;
																					//DEBUG("check: %lu\n", check);
		while (buff[len + check] != set && buff[len + check])
			len++;
																					//DEBUG("len: %lu\n", len);
		if (!(ret[index] = malloc(sizeof(char) * len)))
			return (NULL);
		if (!(ret[index] = ft_substr(buff, check, len)))
			return (NULL);
																					//printf("---------\n");
																					//DEBUG("index: %lu\n", index);
																					//DEBUG("len: %lu\n", len);
																					//DEBUG("check: %lu\n", check);
																					//DEBUG("check: %s\n", ret[index]);
		index++;
		check += len;
	}
																					//DEBUG("md_alloccpy ret");
	return(ret);
}

char	*md_clean(char const *s, char c)
{
	char	set[2];

	ft_bzero(set, 2);
	set[0] = c;
																	//DEBUG("md_clean ret");
	return (ft_strtrim(s, set));
}

char	**ft_split(char const *s, char c)
{
//	size_t	i;
	char	*buff;
	char	**ret;

	if (!s)
		return (NULL);
																		//DEBUG("start");
//*	ft_strtrim pour éviter de séparer du vide *//
	if (!(buff = md_clean(s, c)))
		return (NULL);
															//DEBUG("\nbuff clean: |%s|\n", buff);
															//DEBUG("md_clean 1");
	if (!(ret = md_alloccpy(buff, c)))
		return (NULL);
//DEBUG("md_alloccpy 1");






	free(buff);

//DEBUG("END SPLIT");
	return (ret);
}