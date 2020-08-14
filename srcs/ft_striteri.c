/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:36:32 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:12:47 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Applies the function f to each character of the string passed as argument.
** Passes its index as first argument.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	while (s && s[i])
	{
		f(i, &s[i]);
		i = i + 1;
	}
}
