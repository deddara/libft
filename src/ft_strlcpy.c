/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 06:20:13 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:12:07 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (!src || !dst)
		return (0);
	i = 0;
	len = size;
	if (len != 0)
	{
		while (--len != 0 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = src[i];
	}
	if (len == 0)
	{
		if (size != 0)
			dst[i] = '\0';
		while (src[i])
			i++;
	}
	return (i);
}
