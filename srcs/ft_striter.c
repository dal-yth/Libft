/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:35:25 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:12:43 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**Applies the function f to each character of the string passed as argument.
*/

void	ft_striter(char *s, void (*f)(char*))
{
	size_t i;

	i = 0;
	while (s && s[i])
	{
		f(&s[i]);
		i = i + 1;
	}
}
