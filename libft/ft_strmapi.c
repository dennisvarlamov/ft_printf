/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:01:04 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 18:11:21 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	i = 0;
	if (!s || !(s1 = ft_strnew(ft_strlen(s))))
		return (NULL);
	ft_bzero(s1, ft_strlen((char*)s) + 1);
	while (s[i])
	{
		*(s1 + i) = f(i, (char)*(s + i));
		i++;
	}
	return (s1);
}
