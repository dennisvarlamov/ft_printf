/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cycle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 23:39:47 by nglynis           #+#    #+#             */
/*   Updated: 2020/09/02 00:35:19 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    pf_flags(t_print *ptr)
{
    char    c;
    
    ptr->hash = 0;
    ptr->zero = 0;
    ptr->minus = 0;
    ptr->plus = 0;
    ptr->space = 0;
    while((c = ptr->format[ptr->i]))
    {
        if (c == '#')
            ptr->hash = 1;
        else if (c == '0')
            ptr->zero = 1;
        else if (c == '-')
            ptr->minus = 1;
        else if (c == '+')
            ptr->plus = 1;
        else if (c = ' ')
            ptr->space = 1;
        else
            break ;
        ptr->i++;
    }
    
}
void    pf_cycle(t_print *ptr)
{
    char    c;
    
    if (ft_strcmp(ptr->format, "%" == 0))
        return 0;
    while ((c = ptr->format[ptr->i])) 
    {
        if (c == '%')
        {
            ptr->i++;
            pf_flags(ptr);
            pf_width(ptr);
            
        }
    }
}