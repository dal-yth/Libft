/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:39:12 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:10:11 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Erases data in the n bytes of memory.
** Starting at the location pointed by s.
** Void pointer is cast as char*.
** Values pointed by char *s are made into '\0' chars.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((char*)s)[i] = '\0';
		i = i + 1;
	}
}
