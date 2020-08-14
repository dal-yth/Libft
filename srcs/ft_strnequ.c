/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:23:00 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:26 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Lexicographical comparison between s1 and s2 up to n characters
** or until a ’\0’ is reached.
** If the 2 strings are identical the function returns 1, or 0 otherwise.
*/

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (i < n)
	{
		if (s1[i] == s2[i])
			i = i + 1;
		else
			return (0);
	}
	return (1);
}
