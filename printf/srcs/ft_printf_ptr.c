#include "printf.h"

void ft_putchar(int c)
{
    char a;

    a = c;
    write(1, &c, 1);
}

void ft_printf_p(unsigned int nb)
{

        if (nb >= 16)
        {
            ft_printf_p((nb / 16));
            ft_printf_p((nb % 16));
        }
        else 
        {
            if (nb <= 9)
                ft_putchar(nb + 48); 
            else
                ft_putchar(nb - 10 + 'a');
        }
}
int ft_print_ptr(unsigned long long a)
{
    int    i;
  
    i = 0;
    write(1,"0x",2);
    ft_printf_p(a);
    if (a == 0)
        return (3);
    while (a > 0)
    {
        a = a / 16;
        i++;
    }
    return (i+2);
} 
