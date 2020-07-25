/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 20:32:27 by deddara           #+#    #+#             */
/*   Updated: 2020/05/04 23:11:38 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		space(char c)
{
	if (c == ' ' || c == '\t' || c == '\r')
		return (1);
	if (c == '\n' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

static int		sign_checker(const char *str)
{
	if (*str == '-')
		return (-1);
	else
		return (1);
}

int				ft_atoi(const char *str)
{
	int number;
	int minus;

	number = 0;
	minus = 1;
	if (str == NULL)
		return (0);
	while (space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		minus = sign_checker(str);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (number < 0 && minus < 0)
			return (0);
		else if (number < 0 && minus > 0)
			return (-1);
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * minus);
}
