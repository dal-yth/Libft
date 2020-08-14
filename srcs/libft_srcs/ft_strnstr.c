/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 08:08:42 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:33 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Finds the first occurrence of the substring needle in the string haystack.
** Not more than len chars are searched.
** Returns a pointer to the beginning of the substring,
** or NULL is substring is not found.
*/

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t	j;

	j = ft_strlen(needle);
	if (j == 0)
		return ((char*)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle && len >= j)
		{
			if (ft_strncmp(needle, haystack, j) == 0)
				return ((char*)haystack);
		}
		len = len - 1;
		haystack = haystack + 1;
	}
	return (NULL);
}
