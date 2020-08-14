/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:39:38 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:11:32 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory area dest.
** Memory areas may overlap.
** Returns a pointer to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*newsrc;
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char*)dest;
	newsrc = (unsigned char*)src;
	if (newsrc < tmp)
	{
		while (len-- > 0)
			tmp[len] = newsrc[len];
	}
	else
	{
		while (i < len)
		{
			tmp[i] = newsrc[i];
			i = i + 1;
		}
	}
	return (dest);
}
