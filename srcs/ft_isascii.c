/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 07:53:53 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:10:22 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Checks if c is value that fits into ASCII character set.
** If c is not ASCII character, returns 0.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	else
		return (0);
}
