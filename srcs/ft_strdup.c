/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:50:22 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:12:36 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Duplicates string s1 to new string.
** Returns a pointer to duplicated string, or NULL in case malloc fails.
*/

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!(s2 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i = i + 1;
	}
	s2[i] = '\0';
	return (s2);
}
