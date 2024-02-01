#include "libftprintf.h"

void    ft_puthex_pf(unsigned int n, size_t *counter, char *base)
{
	char	*s;

	s = ft_decimaltohex(n, base);
	ft_putstr_pf(s, counter);
	free(s);
}