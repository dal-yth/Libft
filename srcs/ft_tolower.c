/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 07:59:08 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:13:55 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Converts the letter c to lower case, if possible.
*/

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	else
		return (c);
}
