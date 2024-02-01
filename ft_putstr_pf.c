#include "libftprintf.h"

void	ft_putstr_pf(char *s, size_t *counter)
{
    if (!*s)
        s = "(null)";
    while (*s)
    {
        ft_putchar_pf(*s, counter);
        s++;
    }
}
