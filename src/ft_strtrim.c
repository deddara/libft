/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 07:28:49 by deddara           #+#    #+#             */
/*   Updated: 2020/05/06 07:21:57 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		set_checker(char s1, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		s1_len;
	int		j;
	int		i;

	j = 0;
	i = 0;
	if (!s1 || !set)
		return (0);
	s1_len = ft_strlen(s1);
	while (set_checker(s1[i], set) && s1[i])
		i++;
	while (set_checker(s1[s1_len - 1], set) && s1_len > i)
		s1_len--;
	if (!(result = (char*)malloc(sizeof(char) * (s1_len - i) + 1)))
		return (NULL);
	while (i < s1_len)
	{
		result[j] = s1[i];
		j++;
		i++;
	}
	result[j] = '\0';
	return (result);
}
