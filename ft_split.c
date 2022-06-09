/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amounach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:45:23 by amounach          #+#    #+#             */
/*   Updated: 2022/06/09 17:12:54 by amounach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**free_table(int index, char **tab)
{
	while (index-- >= 0)
		free(tab[index]);
	free(tab);
	return (NULL);
}

static int	ft_count_word(char const *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	word_len(char const *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != c && str[len])
		len++;
	return (len);
}

static char	**allocate(const char *s, int c, int words, char **arr)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		arr[i] = (char *)malloc(len * sizeof(char) + 1);
		if (!arr)
			return (free_table(i, arr));
		j = 0;
		while (j < len)
			arr[i][j++] = *s++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		nb_words;
	char	**tab;

	if (!s)
		return (NULL);
	nb_words = ft_count_word(s, c);
	tab = (char **)malloc((nb_words) * sizeof(char *) + 1);
	if (!tab)
		return (NULL);
	allocate(s, c, nb_words, tab);
	return (tab);
}
