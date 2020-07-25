/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 03:22:04 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:16:45 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*var;
	t_list	*temp;

	temp = *lst;
	if (!del)
		return ;
	if (temp)
	{
		while (temp)
		{
			var = temp->next;
			(*del)(temp->content);
			free(temp);
			temp = var;
		}
		*lst = NULL;
	}
}
