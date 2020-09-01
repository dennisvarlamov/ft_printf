/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 15:05:43 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/04 15:05:50 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_del(void *content, size_t content_size)
{
	if (content && content_size)
		free(content);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*lst_new;
	t_list		*lst_res;

	if (!lst || !f)
		return (NULL);
	if (!(lst_new = ft_lstnew(f(lst)->content, f(lst)->content_size)))
		return (NULL);
	lst = lst->next;
	lst_res = lst_new;
	while (lst)
	{
		if (!(lst_new->next = ft_lstnew(f(lst)->content, f(lst)->content_size)))
		{
			ft_lstdel(&lst_res, &ft_del);
			return (NULL);
		}
		lst = lst->next;
		lst_new = lst_new->next;
	}
	return (lst_res);
}
