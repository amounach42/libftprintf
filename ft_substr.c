/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:27:38 by amounach          #+#    #+#             */
/*   Updated: 2022/06/09 17:12:54 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		length;
	char	*str;
	int		i;

	i = -1;
	if (!s)
		return (0);
	length = ft_strlen(s);
	if (length < (int)start)
		return (ft_strdup(""));
	if ((length - start) < len)
		len = length - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (++i < (int)len)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
