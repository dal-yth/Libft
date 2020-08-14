/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 07:56:43 by jmakela           #+#    #+#             */
/*   Updated: 2020/07/07 14:22:23 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Concanates s1 and s2. Allocates fresh string ending with '\0'.
** Returns concanated string, or if allocation fails returns NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = (ft_strlen(s1));
	j = (ft_strlen(s2));
	if (!(tmp = (char*)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	tmp[i + j] = '\0';
	while ((i + j) >= 0)
	{
		if (j >= 0)
		{
			tmp[i + j] = s2[j];
			j = j - 1;
		}
		else
		{
			tmp[i + j] = s1[i - 1];
			i = i - 1;
		}
	}
	return (tmp);
}
