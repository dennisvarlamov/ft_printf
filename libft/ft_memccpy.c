/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 01:45:13 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 10:34:59 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	i = 0;
	while (n-- > 0)
	{
		*(s1 + i) = *(s2 + i);
		if (*(s1 + i) == (unsigned char)c)
			return (&(dst[++i]));
		++i;
	}
	return (NULL);
}
