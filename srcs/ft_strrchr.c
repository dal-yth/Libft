/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:41:57 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:36 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Returns a pointer to the last occurrence of the character c in the string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = ft_strlen(s);
	tmp = (char*)s;
	while (*tmp != '\0')
		tmp = tmp + 1;
	while (i >= 0)
	{
		if (*tmp == c)
			return (tmp);
		tmp = tmp - 1;
		i = i - 1;
	}
	return (NULL);
}
