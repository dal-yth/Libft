/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:39:51 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:47 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Allocates and returns a fresh substring from string given as argument.
** The substring begins at index start and is of size len.
** If start and len aren’t refering to a valid substring,
** the behavior is undefined.
** If the allocation fails, the function returns NULL.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (!(substr = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (len > 0)
	{
		substr[i] = s[start];
		i = i + 1;
		start = start + 1;
		len = len - 1;
	}
	substr[i] = '\0';
	return (substr);
}
