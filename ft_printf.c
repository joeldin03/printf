#include "libftprintf.h"

void ft_checkformat(va_list arg, char *s, size_t *counter)
{
    if (*s == 'c')
        ft_putchar_pf(va_arg(arg, int), counter);
    else if (*s == 's')
		ft_putstr_pf(va_arg(arg, char *), counter);
	else if (*s == 'p')
		ft_putptr_pf(va_arg(arg, void *), counter);
	else if (*s == 'i' || *s == 'd')
		ft_putnbr_pf(va_arg(arg, int), counter);
	else if (*s == 'u')
		ft_putuint_pf(va_arg(arg, unsigned int), counter);
	else if (*s == 'x')
        ft_puthex_pf(va_arg(arg, unsigned int), counter, HEX_LC);
    else if (*s == 'X')
        ft_puthex_pf(va_arg(arg, unsigned int), counter, HEX_UC);
    else if (*s == '%')
		ft_putchar_pf(*s, counter);
}


int ft_printf(char const *s, ...)
{
    va_list arg;
    size_t  counter;

    if (!s)
        return (0);
    counter = 0;
    va_start(arg, s);
    while (*s)
    {
        if (*s == '%')
        {
            s++;
            ft_checkformat(arg, (char *)s, &counter);
        }
        else
            ft_putchar_pf(*s, &counter);
        s++;
    }
    va_end(arg);
    return (counter);
}