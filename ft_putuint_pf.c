#include "libftprintf.h"

void	ft_putuint_pf(unsigned int n, size_t *counter)
{
	unsigned long	longn;

	longn = n;
	if (longn >= 10)
		ft_putuint_pf(n / 10, counter);
	ft_putchar_pf('0' + n % 10, counter);
}
