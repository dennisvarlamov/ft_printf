/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 01:14:28 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 12:25:33 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	if (!n || dest == src)
		return (dest);
	while (n-- > 0)
	{
		*(str1 + i) = *(str2 + i);
		i++;
	}
	return (dest);
}
