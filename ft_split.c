/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:03:15 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/05 02:47:42 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (i == 0 || (s[i] != c && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free(char **s, size_t	size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static	char	**ft_alloc(char **words, char const *s, char c, size_t size)
{
	size_t	end;
	size_t	start;
	size_t	k;

	start = 0;
	end = 0;
	k = 0;
	while (s[end] != '\0' && k < size)
	{
		while (s[end] == c && start++)
			end++;
		if (s[end] != c)
		{
			while (s[end] != c && s[end] != '\0')
				end++;
			words[k] = ft_substr(s + start, 0, ((end - start)));
			if (!words[k])
				return (ft_free(words, size));
			start = end + 1;
			k++;
		}
		end++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**words;
	size_t	i;

	if (!s || !c)
		return (NULL);
	count = ft_count_words(s, c);
	words = malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (ft_free(words, (count + 1)));
	i = 0;
	words = ft_alloc(words, s, c, count + 1);
	if (!words)
		return (ft_free(words, (count + 1)));
	return (words);
}
