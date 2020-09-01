/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:57:34 by nglynis           #+#    #+#             */
/*   Updated: 2019/11/01 18:02:10 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	ft_strcpy(str, (char*)s1);
	ft_strcat(str, (char*)s2);
	return (str);
}
