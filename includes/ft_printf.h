#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define STDOUT 1;

typedef struct      ft_printf
{
    const char      *format;
    va_list         param;
    int             fd;
    int             result;
    int             i;
    int             zero;
    int             hash;
    int             width;
    int             point;
    int             minus;
    int             plus;
    int             space;

}                   t_print;


#endif 