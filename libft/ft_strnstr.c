/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:04:18 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/04 14:58:38 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			pos;
	unsigned int	i;

	if (!*needle)
		return ((char*)haystack);
	pos = 0;
	while (haystack[pos] != '\0' && pos < len)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (*(needle + i) != '\0' && *(haystack + pos + i) ==
					*(needle + i) && (pos + i) < len)
				++i;
			if (*(needle + i) == '\0')
				return ((char*)&haystack[pos]);
		}
		pos++;
	}
	return (0);
}
