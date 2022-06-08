/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:27:01 by amounach          #+#    #+#             */
/*   Updated: 2022/06/08 19:53:07 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen((char *)src);
	i = 0;
	if (dstsize == 0)
		return (len);
	while (i < (dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
