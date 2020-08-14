/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:31:44 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:12:15 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Returns a pointer to the first c in string s or NULL if c not found.
*/

char	*ft_strchr(const char *s, int c)
{
	char *tmp;

	tmp = (char*)s;
	while (*tmp)
	{
		if (*tmp == c)
			return (tmp);
		tmp = tmp + 1;
	}
	if (c == '\0')
		return (tmp);
	return (NULL);
}
