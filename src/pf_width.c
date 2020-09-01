/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 00:12:24 by nglynis           #+#    #+#             */
/*   Updated: 2020/09/02 00:33:26 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    pf_width(t_print *ptr)
{
    char    c;
    
    ptr->width = 0;
    if (ptr->format[ptr->i] == '*')
    {
        ptr->width = va_arg(ptr->param, int);
        ptr->i++;
        if (ptr->width < 0)
            ptr->minus = 1;
        if (ptr->width < 0)
            ptr->width = -ptr->width;
    }
    c = ptr->format[ptr->i];
    if (c >= '0' && c <= '9')
        ptr->width = 0;
    
}