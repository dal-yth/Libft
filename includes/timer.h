/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 16:07:51 by jmakela           #+#    #+#             */
/*   Updated: 2020/03/11 13:39:14 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIMER_H
# define TIMER_H

# include "libft.h"
# include <time.h>

/*
** Timer struct
** holds start time,
** end time and total time.
*/

typedef struct	s_clock
{
	clock_t		init;
	clock_t		start;
	clock_t		end;
	double		total;
}				t_clock;

double			timer(t_clock *time, int start);

#endif
