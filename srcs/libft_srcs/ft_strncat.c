/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:40:09 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:13 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends src to the dest string. Will use at most n bytes from src.
** Does not need to be null-terminated if it contains n or more bytes.
** Returns a pointer to dest.
*/

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	j = 0;
	i = ft_strlen(dest);
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
