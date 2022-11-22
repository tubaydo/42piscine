#include "printf.h"

int ft_printf_int(int c)
{
    int i;
    char *s;

    s = ft_itoa(c);
    i = 0;
    while(s[i])
    {
        write(1, s[i], 1);
        i++;
    }
    return(i);
}