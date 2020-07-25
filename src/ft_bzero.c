/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 22:09:04 by deddara           #+#    #+#             */
/*   Updated: 2020/07/25 13:49:03 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*symb;

	if (!s)
		return ;
	i = 0;
	symb = (unsigned char*)s;
	while (i < n)
	{
		symb[i] = 0;
		i++;
	}
}
