/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 14:24:27 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/19 15:05:30 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
		[2]-[4]-[5]-[7]-[8]\
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**head;
	t_list	**tmp;
	t_list	**origin;

	origin = NULL;
	tmp = NULL;
	head = NULL;
	if (!lst)
		return (NULL);
	*origin = lst;
	while (lst)
	{
		if (!(*tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(origin, del);
			return (NULL);
		}
		ft_lstadd_back(head, *tmp);
		lst = lst->next;
	}
	return (*head);
}