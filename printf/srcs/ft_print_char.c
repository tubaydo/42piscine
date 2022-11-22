#include "printf.h"

int ft_printf_char(int c)
{
    char a;
    a = c;
    write(1, &a, 1);
    return (1);
}
