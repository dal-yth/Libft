/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 10:17:25 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:10:53 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Iterated the list lst and applies the function f to each link.
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp);
		tmp = tmp->next;
	}
}
