/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 07:58:07 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:12:40 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Lexicographical comparison between s1 and s2.
** If the 2 strings are identical the function returns 1, or 0 otherwise.
*/

int	ft_strequ(char const *s1, char const *s2)
{
	size_t i;
	size_t len;

	len = ft_strlen(s1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (i <= len)
	{
		if (s1[i] == s2[i])
			i = i + 1;
		else
			return (0);
	}
	return (1);
}
