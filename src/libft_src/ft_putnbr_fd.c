/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:26:12 by amounach          #+#    #+#             */
/*   Updated: 2022/06/08 19:53:28 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/libft.h"

static void	putnbr_fd(long int n, int fd)
{
	if (n != 0)
	{
		putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	else if (nbr < 10)
	{
		ft_putchar_fd(nbr + '0', fd);
		return ;
	}
	if (nbr == 0)
		ft_putchar_fd(0, fd);
	else
		putnbr_fd(nbr, fd);
}
