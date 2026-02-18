/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchiling <vchiling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:00:26 by vchiling          #+#    #+#             */
/*   Updated: 2026/02/18 15:27:01 by vchiling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *s, char c)
{
	int	in_word;
	int	count;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			++count;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		++s;
	}
	return (count);
}

char	*word_dup(const char *s, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = ft_calloc((len + 1), sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		++i;
	}
	return (word);
}

static int	help_func(const char *s, char c, int start, int i)
{
	if (s[i + 1] == '\0' && s[i] != c)
		return (i - start + 1);
	else
		return (i - start);
}

static int	fill_words(char **strs, const char *s, char c)
{
	int	i;
	int	start;
	int	index;
	int	len;

	i = 0;
	start = -1;
	index = 0;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			len = help_func(s, c, start, i);
			strs[index] = word_dup(s + start, len);
			if (!strs[index])
				return (-1);
			index++;
			start = -1;
		}
		i++;
	}
	strs[index] = NULL;
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		count;
	int		i;

	if (!s)
		return (NULL);
	count = count_word(s, c);
	strs = ft_calloc((count + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	if (fill_words(strs, s, c) == -1)
	{
		i = 0;
		while (i < count)
			free(strs[i++]);
		free(strs);
		return (NULL);
	}
	return (strs);
}
