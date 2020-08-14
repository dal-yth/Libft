/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:29:23 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:12:24 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares strings s1 and s2.
** Returns int less than, equal, or greater than zero if s1 is,
** less than, equal, or greater than s2.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while ((*ptr1) && (*ptr1 == *ptr2))
	{
		ptr1 = ptr1 + 1;
		ptr2 = ptr2 + 1;
	}
	return (*ptr1 - *ptr2);
}
