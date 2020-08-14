/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 08:49:37 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:11:24 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory area dest.
** Memory areas must not overlap.
** Returns a pointer to dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*newsrc;
	char	*newdst;
	size_t	i;

	if (dest == NULL && src == NULL)
	{
		newdst = NULL;
		return (newdst);
	}
	newsrc = (char*)src;
	newdst = (char*)dest;
	i = 0;
	while (i < n)
	{
		newdst[i] = newsrc[i];
		i = i + 1;
	}
	return (newdst);
}
