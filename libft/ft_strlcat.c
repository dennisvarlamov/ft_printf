/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:49:59 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 17:05:27 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *restrict dest,
		const char *restrict src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int res;

	i = ft_strlen(dest);
	res = ft_strlen(src);
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
