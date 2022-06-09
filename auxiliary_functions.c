/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliary_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:46:02 by amounach          #+#    #+#             */
/*   Updated: 2022/06/09 17:18:20 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_ptf(char c, int *count)
{
	int	nbyte;

	nbyte = write(1, &c, 1);
	*count += nbyte;
	if (nbyte < 0)
		*count = -1;
}

void	ft_putstr_ptf(char	*str, int *count)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		ft_putchar_ptf(str[i], count);
		i++;
	}
}

void	ft_putnbr_ptf(int nbr, int *count)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		ft_putchar_ptf('-', count);
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar_ptf(nb + '0', count);
		return ;
	}
	ft_putnbr_ptf(nb / 10, count);
	ft_putchar_ptf(nb % 10 + 48, count);
}

static int	ft_strlen_ptf(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(unsigned long nb, int *count, char *base)
{
	unsigned long	radix;

	radix = ft_strlen_ptf(base);
	if (nb < radix)
	{
		ft_putchar_ptf(base[nb % radix], count);
		return ;
	}
	ft_putnbr_base(nb / radix, count, base);
	ft_putchar_ptf(base[nb % radix], count);
}
