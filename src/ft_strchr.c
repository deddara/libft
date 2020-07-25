/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 08:10:36 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:12:04 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s)
		return (NULL);
	if (s[0] == '\0' && s[0] == (unsigned char)c)
		return ((char*)&s[0]);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char*)&s[i]);
		else if (s[i + 1] == (unsigned char)c)
			return ((char*)&s[i + 1]);
		i++;
	}
	return (NULL);
}
