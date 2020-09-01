/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 02:05:06 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 17:12:38 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t			i;
	unsigned char	*s10;

	i = 0;
	s10 = (unsigned char*)s1;
	while (i < n)
	{
		if (*(s10 + i) == (unsigned char)c)
			return (&(s10[i]));
		i++;
	}
	return (NULL);
}
