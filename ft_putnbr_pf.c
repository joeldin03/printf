#include "libftprintf.h"

void	ft_putnbr_pf(int n, size_t *counter)
{
	long	longn;

	longn = n;
	if (longn < 0)
	{
		ft_putchar_pf('-', counter);
        ft_putnbr_pf(-n, counter);
	}
	if (longn >= 10)
		ft_putnbr_pf(n / 10, counter);
	ft_putchar_pf('0' + n % 10, counter);
}