#include "printf.h"

void ft_putchar(int c)
{
    char a;

    a = c;
    write(1, &c, 1);
}

void ft_printf_u(unsigned int nb)
{

        if (nb > 9)
        {
            ft_printf_u(nb /10);
            ft_printf_u(nb % 10);
        }
        else
             ft_putchar(nb + 48);
}

int    ft_printf_uint(unsigned int a)
{
    int    i;
  
    i = 0;
    ft_printf_u(a);
    if (a == 0)
        i = 1;
    while (a > 0)
    {
        a = a / 10;
        i++;
    }
    return (i);
}
