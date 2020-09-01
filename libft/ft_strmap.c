/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:32:04 by nglynis           #+#    #+#             */
/*   Updated: 2019/10/03 18:08:50 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*s1;

	if (!s || !(s1 = ft_strnew(ft_strlen(s))))
		return (NULL);
	ft_bzero(s1, ft_strlen((char*)s) + 1);
	i = 0;
	while (*(s + i))
	{
		*(s1 + i) = f((char)*(s + i));
		i++;
	}
	return (s1);
}
