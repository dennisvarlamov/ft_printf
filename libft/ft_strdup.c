/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:50:01 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/04 14:59:28 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*s;
	size_t		i;

	if (!(s = ft_strnew(ft_strlen((src)))))
		return (NULL);
	i = 0;
	while (i < ft_strlen(src))
	{
		*(s + i) = *(src + i);
		i++;
	}
	*(s + i) = '\0';
	return ((char*)s);
}
