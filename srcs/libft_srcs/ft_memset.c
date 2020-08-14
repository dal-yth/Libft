/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:31:36 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:11:35 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fills n bytes of memory area pointed by s with c.
** Returns a pointer to memory area s.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char			*newb;
	size_t			i;
	unsigned char	newc;

	newc = (unsigned char)c;
	newb = (char*)b;
	i = 0;
	while (i < len)
	{
		newb[i] = newc;
		i = i + 1;
	}
	return (newb);
}
