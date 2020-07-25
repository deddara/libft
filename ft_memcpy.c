/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 22:14:50 by deddara           #+#    #+#             */
/*   Updated: 2020/05/06 11:46:01 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pointer_dest;
	unsigned char	*pointer_src;

	if (!dest && !src)
		return (NULL);
	i = 0;
	pointer_src = (unsigned char*)src;
	pointer_dest = (unsigned char*)dest;
	while (i < n)
	{
		pointer_dest[i] = pointer_src[i];
		i++;
	}
	return (dest);
}
