/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:10:39 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:11:42 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Outputs the char c to the file descriptor fd.
** 0 for standard input, 1 for standard output and 2 for standard error.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
