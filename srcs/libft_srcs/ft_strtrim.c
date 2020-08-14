/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:40:52 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:51 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a copy of the string given as argument
** without whitespaces at the beginning or at the end of the string.
** Whitespaces are: ' ', '\n' and '\t'.
** If no whitespaces are found, function returns a copy of s.
** If the allocation fails the function returns NULL.
*/

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*copy;

	if (s == NULL)
		return (NULL);
	copy = "";
	i = 0;
	n = 0;
	j = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i = i + 1;
	if (i == j)
		return (copy);
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j = j - 1;
	if (!(copy = (char*)malloc(j - i + 1)))
		return (NULL);
	while (i < j)
		copy[n++] = s[i++];
	copy[n] = '\0';
	return (copy);
}
