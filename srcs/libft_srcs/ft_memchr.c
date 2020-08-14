/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:46:47 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:11:17 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Scans n bytes of memory area pointed by s for first c.
** Returns a pointer to the matching byte or NULL if c not found.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*news;
	unsigned char	newc;

	newc = (unsigned char)c;
	news = (unsigned char*)s;
	while (n)
	{
		if (*news == newc)
			return (news);
		news = news + 1;
		n = n - 1;
	}
	return (NULL);
}
