/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:43:58 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:10:32 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts int n to fresh char string.
** Allocates with malloc and checks if allocation is successful.
** Works with negative numbers and max int values.
*/

static size_t	ft_count(long tmp, size_t i)
{
	i = 0;
	if (tmp == 0)
		return (1);
	while (tmp != 0)
	{
		tmp = tmp / 10;
		i = i + 1;
	}
	return (i);
}

static char		*ft_convert(char *str, long tmp, size_t i, int n)
{
	str[i] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[i - 1] = (n % 10 + '0');
		if (tmp == -2147483648)
			str[10] = '8';
		n = n / 10;
		i = i - 1;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	size_t	i;
	long	tmp;
	char	*str;

	tmp = n;
	i = 0;
	i = ft_count(tmp, i);
	if (n == -2147483648)
		n = n + 1;
	if (n < 0)
	{
		if (!(str = (char*)malloc(i + 2)))
			return (NULL);
		str[0] = '-';
		n = n * -1;
		i = i + 1;
	}
	else
	{
		if (!(str = (char*)malloc(i + 1)))
			return (NULL);
	}
	str = ft_convert(str, tmp, i, n);
	return (str);
}
