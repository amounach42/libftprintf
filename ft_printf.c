/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 23:46:11 by amounach          #+#    #+#             */
/*   Updated: 2022/06/09 17:29:41 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check(va_list ap, char c, int *count)
{
	if (c == 'c')
		ft_putchar_ptf(va_arg(ap, int), count);
	else if (c == 's')
		ft_putstr_ptf(va_arg(ap, char *), count);
	else if (c == 'p')
	{
		ft_putstr_ptf("0x", count);
		ft_putnbr_base(va_arg(ap, unsigned long), count, LHEX_BASE);
	}
	else if (c == 'd' || c == 'i')
		ft_putnbr_ptf(va_arg(ap, int), count);
	else if (c == 'u')
		ft_putnbr_base(va_arg(ap, unsigned int), count, DEC_BASE);
	else if (c == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), count, LHEX_BASE);
	else if (c == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), count, UHEX_BASE);
	else if (c == '%')
		ft_putchar_ptf('%', count);
	else
		ft_putchar_ptf(c, count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check(ap, *format, &count);
			if (count == -1)
				return (-1);
		}
		else
			ft_putchar_ptf(*format, &count);
		format++;
	}
	va_end(ap);
	return (count);
}
