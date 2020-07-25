/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 20:42:05 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:12:09 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*result;

	j = 0;
	i = 0;
	if (!s || !f)
		return (0);
	if (!(result = ft_strdup(s)))
		return (NULL);
	while (s[i])
	{
		result[j] = f(i, s[i]);
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
