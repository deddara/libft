/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 06:23:14 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:12:07 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(int n, int *i, char *dest)
{
	while (n-- > 0 && *dest != '\0')
	{
		dest++;
		(*i)++;
	}
	return (*i);
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		n;
	size_t		dlen;
	int			i;
	int			j;

	n = size;
	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	dlen = counter(n, &i, dest);
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(src));
	while (src[j] != '\0')
	{
		if (n != 1)
		{
			dest[i++] = src[j];
			n--;
		}
		j++;
	}
	dest[i] = '\0';
	return (dlen + ft_strlen(src));
}
