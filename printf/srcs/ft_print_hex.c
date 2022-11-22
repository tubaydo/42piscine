#include "printf.h"

void ft_putchar(int c)
{
    char a;

    a = c;
    write(1, &c, 1);
}

void ft_printf_h(unsigned int nb, const char format)
{

        if (nb >= 16)
        {
            ft_printf_h((nb / 16),format);
            ft_printf_h((nb % 16),format);
        }
        else 
        {
            if (nb <= 9)
                 ft_putchar(nb + 48); 
            else
            {
                if(format == 'x')
                    ft_putchar(nb - 10 + 'a');
                if(format == 'X')
                    ft_putchar(nb - 10 + 'A');
            }
        }
}
int ft_print_hex(unsigned int a, const char format)
{
    int    i;
  
    i = 0; 
    ft_printf_h(a, format);
    if (a == 0)
        return (1);
    while (a > 0)
    {
        a = a / 16;
        i++;
    }
    return (i);
} 
