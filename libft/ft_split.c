/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:22:55 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/09 12:51:01 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Splits the string 's' into words separated by the delimiter 'c' */
static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;
	int		in_word;

	i = 0;
	words = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			words++;
		}
		else if (s[i] == c && in_word == 1)
			in_word = 0;
		i++;
	}
	return (words);
}

void	free_all(char **tab, size_t index)
{
	while (index > 0)
	{
		index--;
		free(tab[index]);
	}
	free(tab);
}

char	*allocate_word(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

int	allocate_tab(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			tab[index] = allocate_word(s, j, i);
			if (!tab[index])
			{
				free_all(tab, index);
				return (0);
			}
			index++;
		}
		i++;
	}
	tab[index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tab;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	if (!allocate_tab(s, c, tab))
		return (NULL);
	return (tab);
}
