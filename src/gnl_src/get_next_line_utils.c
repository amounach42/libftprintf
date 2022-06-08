/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:03:23 by amounach          #+#    #+#             */
/*   Updated: 2022/06/08 19:55:08 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if ((char)c == '\0')
		return (str);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;
	int		str_len;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char));
		s1[0] = '\0';
	}
	str_len = ft_strlen(s1) + ft_strlen(s2);
   	i = 0;
	j = 0;
	str = (char *) malloc((str_len + 1) * sizeof(char));
		if (!str)
			return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = 0;
	free(s1);
	return (str);
}

