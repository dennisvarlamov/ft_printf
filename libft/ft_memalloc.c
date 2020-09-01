/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:12:35 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/02 11:25:50 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *s;

	s = NULL;
	if (!(s = (int*)malloc(sizeof(size) * (size))))
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
