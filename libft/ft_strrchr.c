/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:36:52 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 17:24:46 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s);
	while (*(s + i) != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char*)(s + i));
}
