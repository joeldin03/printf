#include "libftprintf.h"

static size_t ft_hexlen(unsigned int n)
{
    size_t  len;

    len = 1;
    while (n >= 16)
    {
        n /= 16;
        len++;
    }
    return (len);
}

char	*ft_decimaltohex(unsigned int n, char *base)
{
    size_t  len;
    char    *s;

    len = ft_hexlen(n);
    s = ft_calloc(len + 1, sizeof(char));
    if (!s)
        return (0);
    while (len--)
    {
        s[len] = base[n % 16];
        n /= 16;
    }
    return (s);
}
