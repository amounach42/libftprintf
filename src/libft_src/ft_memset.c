/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:25:39 by amounach          #+#    #+#             */
/*   Updated: 2022/06/08 19:54:50 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*y;

	i = 0;
	x = (unsigned char)c;
	y = (unsigned char *)b;
	while (i < len)
		y[i++] = x;
	return (b);
}
