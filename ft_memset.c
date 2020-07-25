/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:24:02 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:16:31 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*symb;

	if (!s)
		return (NULL);
	i = 0;
	symb = (unsigned char*)s;
	while (i < n)
	{
		symb[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
