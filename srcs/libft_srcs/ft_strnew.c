/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:35:00 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:29 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc and returns a fresh string ending with ’\0’.
** Each character of the string is initialized at ’\0’.
** Returns the string allocated and initialized to 0,
** or NULL if allocation fails.
*/

char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}
