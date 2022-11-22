#include "printf.h"

int ft_printf(const char *format, ...)
{
    int i;
    int ret;

    va_list args;
    va_start(args,format);
    while(format[i])
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            ret++;
        }
        else (format[i] == '%')
        {
            ret += ft_evo(args, format[i + 1]);
        }
        i++;
    }
    va_end(args);
    return(ret);
}

int ft_evo(args, const char c)
{
    int ret;

    ret = 0;
    if(c == 'c')
        ret += ft_print_char(va_args(args, char));
    if(c == 's')
        ret += ft_print_str(va_args(args, char *));
    if(c == 'd' || c == 'i')
        ret += ft_print_int(va_args(args, int));
    if(c == 'p')
        ret += ft_print_ptr(va_args(args, void *));
    if(c == 'u')
        ret += ft_print_ptr(va_args(args, unsigned int));
    if(c == 'x' || c == 'X')
        ret += ft_print_hex(va_args(args, unsigned int),format);
    if(c == '%')
        ret += ft_percent(c);
    return(1);
}
int   ft_percent(char c)
{
    write(1, &c, 1);
    return(1);
}

