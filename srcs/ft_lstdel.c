/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <jmakela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 10:18:57 by jmakela           #+#    #+#             */
/*   Updated: 2020/02/14 18:10:45 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Takes the adress of a pointer to a link,
** Frees the memory of this link and every successors of that link.
** The pointer to the link that was just freed is set to NULL.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *nextlst;

	lst = *alst;
	while (lst)
	{
		nextlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nextlst;
	}
	*alst = NULL;
}
