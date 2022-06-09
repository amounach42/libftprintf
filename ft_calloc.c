/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:43:19 by amounach          #+#    #+#             */
/*   Updated: 2022/06/09 17:12:54 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		r;
	char	*ptr;

	r = count * size;
	ptr = (char *)malloc(r);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, r);
	return (ptr);
}
