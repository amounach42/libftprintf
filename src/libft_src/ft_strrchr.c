/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:27:31 by amounach          #+#    #+#             */
/*   Updated: 2022/06/08 19:52:49 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			last = (char *) s + i;
		i++;
	}
	if (c == '\0')
		return ((char *) s + i);
	if (last)
		return (last);
	return ((char *)0);
}
