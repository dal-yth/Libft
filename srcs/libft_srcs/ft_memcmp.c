/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:20:28 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:11:20 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares n bytes of memory areas s1 and s2.
** Returns int less than, equal, or greater than zero,
** if first n bytes of s1 is found to be, less than,
** equal or greater than first n bytes of s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*news1;
	unsigned char	*news2;

	news1 = (unsigned char*)s1;
	news2 = (unsigned char*)s2;
	while (n)
	{
		if (*news1 != *news2)
			return (*news1 - *news2);
		news1 = news1 + 1;
		news2 = news2 + 1;
		n = n - 1;
	}
	return (0);
}
