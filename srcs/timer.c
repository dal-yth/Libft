/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 16:07:17 by jmakela           #+#    #+#             */
/*   Updated: 2020/07/28 19:20:04 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Usage of timer:
** Create t_clock time variable and send the
** address of it and start value to determine
** what would you like timer to do.
** Start value 1, gives starting value to time->init,
** it is used to get total time of execution.
** 2 is used for starting a "lap", basically if you
** want to know how long some function x takes time
** to complete. 3 ends the lap and returns total time
** as double. 4 ends the init and returns total time
** as double.
*/

double	timer(t_clock *time, int start)
{
	if (start == 1)
		time->init = clock();
	else if (start == 2)
		time->start = clock();
	else if (start == 3)
	{
		time->end = clock();
		time->total = (double)(time->end - time->start) /
		CLOCKS_PER_SEC;
		return (time->total);
	}
	else if (start == 4)
	{
		time->end = clock();
		time->total = (double)(time->end - time->init) /
		CLOCKS_PER_SEC;
		return (time->total);
	}
	else
		ft_dprintf(2, "Wrong start/end value\n");
	return (0);
}
