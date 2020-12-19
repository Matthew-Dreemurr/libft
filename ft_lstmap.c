/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 14:24:27 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/19 16:08:10 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**head;
	t_list	*tmp;
	void	*origin;

	origin = NULL;
	tmp = NULL;
	head = NULL;
	if (!lst)
		return (NULL);
	origin = lst;
	while (lst->next)
	{
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(origin, del);
			return (NULL);
		}
		ft_lstadd_back(head, tmp);
		lst = lst->next;
printf("{{\n== Debug 1}}\n");
	}
printf("{{\n== Debug 9}}\n");
	return (*head);
}
