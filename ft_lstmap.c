/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhadad <mhadad@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 14:24:27 by mhadad            #+#    #+#             */
/*   Updated: 2020/12/19 17:48:18 by mhadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*buff;

	if (!lst)
		return (NULL);
	if (lst->next)
		buff = ft_lstmap(lst->content, f, del);

	if (!(ret = ft_lstnew(f(lst->content))))
	{
		//* free *//
	}
	if (!lst->next)
		ret->next = NULL;
	ret->next = buff->next;
	return (ret);
}
