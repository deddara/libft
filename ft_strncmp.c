/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:47:33 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:12:10 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *st1, const char *st2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;
	unsigned char	*s2;

	if (!st1 || !st2)
		return (0);
	s1 = (unsigned char*)st1;
	s2 = (unsigned char*)st2;
	i = 0;
	while (s1[i] == s2[i] && i < (n - 1) && s1[i] && s2[i])
		i++;
	if (s1[i] != s2[i] && n != 0)
		return (s1[i] - s2[i]);
	return (0);
}
