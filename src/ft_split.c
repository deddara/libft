/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deddara <deddara@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 22:58:24 by deddara           #+#    #+#             */
/*   Updated: 2020/05/06 11:32:57 by deddara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_words_counter(char const *str, char c)
{
	int i;
	int counter;
	int inword;

	inword = 0;
	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && inword == 0)
		{
			counter++;
			inword = 1;
		}
		else if (str[i] == c)
			inword = 0;
		i++;
	}
	return (counter);
}

static int		words_len(char const *s, char c)
{
	int i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

static char		**ft_free(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
	return (NULL);
}

static char		**splitter(int words, char const *s, char c, char **result)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		if (!(result[i] = (char*)malloc(sizeof(char) * (words_len(s, c) + 1))))
			return (ft_free(result, i));
		j = 0;
		while (*s != c && *s != '\0')
		{
			result[i][j] = *s;
			j++;
			s++;
		}
		result[i][j] = '\0';
		i++;
	}
	result[i] = 0;
	return (result);
}

char			**ft_split(char const *s, char c)
{
	int		words;
	char	**result;

	if (!s)
		return (NULL);
	words = ft_words_counter(s, c);
	result = (char**)malloc(sizeof(char*) * (words + 1));
	if (!result)
		return (NULL);
	return (splitter(words, s, c, result));
}
