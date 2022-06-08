/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:26:55 by amounach          #+#    #+#             */
/*   Updated: 2022/06/08 19:53:09 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	j;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst > dstsize || dstsize == 0)
		return (dstsize + len_src);
	i = len_dst;
	j = 0;
	while (src[j] && i < (dstsize - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_dst + len_src);
}
