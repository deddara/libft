/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 03:39:55 by deddara           #+#    #+#             */
/*   Updated: 2020/05/06 11:05:56 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		str_length;

	if (!s)
		return (NULL);
	str_length = ft_strlen(s);
	if ((str_length - 1) < start)
	{
		substr = (char*)malloc(sizeof(char) * 1);
		substr[0] = 0;
		return (substr);
	}
	str_length = ft_strlen(&s[start]);
	if (str_length < len)
		str_length++;
	else
		str_length = len + 1;
	substr = (char*)malloc(sizeof(char) * str_length);
	ft_strlcpy(substr, &s[start], str_length);
	return (substr);
}
