/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 10:21:27 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:10:56 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates list lst and applies function f top each link.
** Creates fresh list resulting from successive applications of f.
** If allocations fails, returns NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *newlst;

	list = NULL;
	if (lst && f)
	{
		newlst = f(lst);
		list = newlst;
		lst = lst->next;
		while (lst)
		{
			newlst->next = f(lst);
			newlst = newlst->next;
			lst = lst->next;
		}
	}
	return (list);
}
