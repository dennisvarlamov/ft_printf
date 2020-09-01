/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:29:34 by nglynis           #+#    #+#             */
/*   Updated: 2019/09/22 18:31:18 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long	r;
	int			n;

	r = 0;
	while (*str == ' ' || *str == '\n' || *str == '\r'
			|| *str == '\f' || *str == '\t' || *str == '\v')
		str++;
	n = (*str == '-') ? (-1) : (1);
	if (*str == '+' || *str == '-')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		r = r * 10 + (*str - 48);
		str++;
	}
	if (r * n > 0 && n < 0)
		return (0);
	if (r * n < 0 && n > 0)
		return (-1);
	return ((int)r * n);
}
