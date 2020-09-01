/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:54:24 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 12:25:40 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*dest;
	size_t			i;

	str = (unsigned char*)src;
	dest = (unsigned char*)dst;
	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	else if (str < dest)
		while (n--)
			*(dest + n) = *(str + n);
	else
	{
		while (n-- > 0)
			*dest++ = *str++;
	}
	return (dst);
}
