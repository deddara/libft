/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 23:12:21 by deddara           #+#    #+#             */
/*   Updated: 2020/05/05 00:06:22 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*un_dest;
	unsigned char	*un_src;
	size_t			i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	un_dest = (unsigned char*)dest;
	un_src = (unsigned char*)src;
	while (i < n)
	{
		un_dest[i] = un_src[i];
		if (un_src[i] == (unsigned char)c)
		{
			return (dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
