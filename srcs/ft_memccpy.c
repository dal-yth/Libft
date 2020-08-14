/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:10:29 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:11:11 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Copies n bytes from memory area src to dest.
** Stops when c is found. If memory areas overlap, result is undefined.
** Returns a pointer to next char in dest after c or NULL if c not found.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*newsrc;
	unsigned char	*newdst;
	unsigned char	newc;

	newc = (unsigned char)c;
	newsrc = (unsigned char*)src;
	newdst = (unsigned char*)dest;
	while (n)
	{
		if (*newsrc == newc)
		{
			*newdst = *newsrc;
			return (newdst + 1);
		}
		*newdst = *newsrc;
		newdst = newdst + 1;
		newsrc = newsrc + 1;
		n = n - 1;
	}
	return (NULL);
}
