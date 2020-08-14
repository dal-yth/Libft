/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:10:54 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:11:05 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc and returns fresh memory area.
** Memory is initialized to 0 and upon malloc failure returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if (!(ptr = (void*)malloc(size)))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
