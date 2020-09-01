/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:46:50 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 12:27:26 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && src[i])
	{
		*(dst + i) = *(src + i);
		i++;
	}
	while (i < len)
	{
		*(dst + i) = '\0';
		i++;
	}
	return (dst);
}
