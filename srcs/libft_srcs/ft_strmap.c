/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:37:36 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:05 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies function f to each character of the string.
** Creates a fresh string resulting from successive applications of f
** and returns it.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*newstr;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	if (!(newstr = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		newstr[i] = f(s[i]);
		i = i + 1;
	}
	newstr[i] = '\0';
	return (newstr);
}
