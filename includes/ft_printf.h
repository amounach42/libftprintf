/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:55:20 by amounach          #+#    #+#             */
/*   Updated: 2021/12/16 20:34:18 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# define DEC_BASE "0123456789"
# define UHEX_BASE "0123456789ABCDEF"
# define LHEX_BASE "0123456789abcdef"

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char	*str, int *count);
void	ft_putnbr(int nbr, int *count);
void	ft_putnbr_base(unsigned long nbr, int *count, char *base);

#endif
