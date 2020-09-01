/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:22:19 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/04 14:43:38 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	min;
	size_t	max;
	size_t	len;

	if (!s)
		return (NULL);
	min = 0;
	while (*(s + min) != '\0'
			&& (*(s + min) == ' ' || *(s + min) == '\n' || *(s + min) == '\t'))
		min++;
	max = ft_strlen((char*)s);
	while (min < max
			&& (*(s + max - 1) == ' ' ||
				*(s + max - 1) == '\n' || *(s + max - 1) == '\t'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len));
}
