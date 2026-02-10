/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbulot <jbulot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:34:35 by jbulot            #+#    #+#             */
/*   Updated: 2026/02/10 16:37:03 by jbulot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*get_next_word(const char *s, size_t *i, char c)
{
	size_t	start;
	char	*word;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	word = ft_substr(s, start, *i - start);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	char	*tmp;

	if (!s)
		return (NULL);
	res = malloc(sizeof(*res) * (word_count(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			tmp = get_next_word(s, &i, c);
			res[j] = tmp;
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}
