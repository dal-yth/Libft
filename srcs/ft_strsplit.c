/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:31:04 by jmakela           #+#    #+#             */
/*   Updated: 2020/07/28 08:04:32 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Allocates and returns an array of fresh strings.
** Obtained by splitting *s using c as delimiter.
** If allocation fails, returns NULL.
*/

static size_t	ft_count(char const *s, char c)
{
	size_t words;

	words = 0;
	if (*s && *s != c)
	{
		words = words + 1;
		s = s + 1;
	}
	while (*s)
	{
		while (*s == c)
		{
			s = s + 1;
			if (*s != c && *s)
				words = words + 1;
		}
		s = s + 1;
	}
	return (words);
}

static size_t	ft_len(const char *s, char c)
{
	size_t count;

	count = 0;
	while (*s != c && *s)
	{
		count = count + 1;
		s = s + 1;
	}
	return (count);
}

static char		**ft_make_arr(char **arr, char const *s, char c)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!(arr[j] = (char *)malloc(sizeof(char) * (ft_len(s, c) + 1))))
			{
				free(arr);
				return (NULL);
			}
			while (*s && *s != c)
				arr[j][i++] = (char)*s++;
			arr[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	arr[j] = NULL;
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;

	if (!s || (!(arr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1)))))
		return (NULL);
	arr = ft_make_arr(arr, s, c);
	return (arr);
}
