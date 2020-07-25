/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 09:06:44 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:12:11 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*res(const char *str, const char *to_find, size_t len, int i)
{
	int		j;
	size_t	counter;

	counter = 0;
	while (str[i])
	{
		j = 1;
		if (str[i] == to_find[0])
		{
			counter++;
			while (str[i + j] == to_find[j] && to_find[j] && counter <= len)
			{
				j++;
				counter++;
			}
			if (to_find[j] == '\0' && counter <= len)
				return ((char*)&str[i]);
			i++;
			continue ;
		}
		counter++;
		i++;
	}
	return (NULL);
}

char			*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;

	i = 0;
	if (!to_find || !str)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char*)str);
	return (res(str, to_find, len, i));
}
