/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 10:26:34 by jmakela           #+#    #+#             */
/*   Updated: 2020/04/01 10:56:57 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Allocates and returns a fresh link.
** Content and content_size are initialised by copy of the parameters.
** If content is null, content is initialised to NULL and content_size is 0.
** Next is initialised to NUll. If allocation fails, returns NULL.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
		return (list);
	}
	if (!(list->content = malloc(content_size)))
		return (NULL);
	ft_memcpy(list->content, content, content_size);
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
