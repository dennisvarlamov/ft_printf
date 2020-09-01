/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:48:07 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 18:17:15 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s1;
	unsigned int	i;

	i = 0;
	if (!s || !(s1 = ft_strnew(len)))
		return (NULL);
	while (len-- > 0)
	{
		*(s1 + i) = *(s + i + start);
		i++;
	}
	*(s1 + i) = '\0';
	return (s1);
}
