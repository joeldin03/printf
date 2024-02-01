#include "libftprintf.h"

void	ft_putptr_pf(void *ptr, size_t *counter)
{
    size_t  address;
	char    *s;

	address = (unsigned long)ptr;
    s = ft_decimaltohex(address, HEX_LC);
	ft_putstr_pf("0x", counter);
	ft_putstr_pf(s, counter);
	free(s);
}