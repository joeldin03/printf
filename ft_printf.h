/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:46:23 by joelozan          #+#    #+#             */
/*   Updated: 2024/02/02 18:01:53 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

# define DEC    "0123456789"
# define HEX_LC "0123456789abcdef"
# define HEX_UC "0123456789ABCDEF"

int		ft_printf(char const *s, ...);
int	    ft_putchar_pf(char c);
int	    ft_putstr_pf(char *s);
int	    ft_putnbr_pf(int n);
int	    ft_putuint_pf(unsigned int n);
int 	ft_puthex_pf(unsigned int n, char *base);
void 	ft_putptr_pf(void *ptr);

int	    len_number(long n);
int     len_hexnumber(unsigned int n);
char	*decimaltohex(unsigned int n, char *base);

#endif
