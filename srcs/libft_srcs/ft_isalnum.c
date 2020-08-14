/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 07:50:57 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:10:15 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if c is alphanumeric character.
** If c is not alphanumeric, returns 0.
*/

int	ft_isalnum(int c)
{
	if (ft_isdigit(c))
		return (ft_isdigit(c));
	else if (ft_isalpha(c))
		return (ft_isalpha(c));
	else
		return (0);
}
