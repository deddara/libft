/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:18:30 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:23:43 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *point;

	point = malloc(size * nmemb);
	if (point)
	{
		ft_bzero(point, size * nmemb);
		return (point);
	}
	return (NULL);
}
