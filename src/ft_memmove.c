/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:19:41 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:12:00 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		thx_norminette(unsigned char *un_dest,
unsigned char *un_src, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		un_dest[i] = un_src[i];
		i++;
	}
}

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*un_dest;
	unsigned char	*un_src;
	size_t			i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	un_dest = (unsigned char*)dest;
	un_src = (unsigned char*)src;
	if (un_dest < un_src)
		thx_norminette(un_dest, un_src, n);
	else
	{
		i = n;
		i--;
		while (n--)
		{
			un_dest[i] = un_src[i];
			i--;
		}
	}
	return (dest);
}
