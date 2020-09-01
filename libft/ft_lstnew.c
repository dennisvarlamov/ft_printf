/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 12:30:53 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/04 14:36:32 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *res;

	if ((res = (t_list *)ft_memalloc(sizeof(t_list))))
	{
		if (!content)
		{
			res->content = NULL;
			res->content_size = 0;
		}
		else
		{
			if (!(res->content = ft_memalloc(content_size)))
			{
				free(res);
				return (NULL);
			}
			ft_memcpy(res->content, content, content_size);
			res->content_size = content_size;
		}
		res->next = NULL;
	}
	return (res);
}
