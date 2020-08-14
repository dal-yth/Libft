/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:38:33 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:10 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Applies function f to each character of the string.
** Passes its index as first argument.
** Creates a fresh string resulting from successive applications of f
** and returns it.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	if (!(newstr = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i = i + 1;
	}
	newstr[i] = '\0';
	return (newstr);
}
