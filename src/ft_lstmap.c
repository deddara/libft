/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 03:46:08 by deddara           #+#    #+#             */
/*   Updated: 2020/05/06 07:22:16 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*tale;

	if (lst && del && f)
	{
		while (lst)
		{
			if (!(*f)(lst->content))
				(*del)(lst->content);
			if (!(new_l = ft_lstnew((*f)(lst->content))))
				return (NULL);
			ft_lstadd_back(&tale, new_l);
			lst = lst->next;
		}
		return (tale);
	}
	return (0);
}
