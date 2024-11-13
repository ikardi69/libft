/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:07:45 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/13 00:37:50 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static	size_t	ft_skip(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if ((ft_strchr(set, s1[i])))
			i++;
		else
			break ;
	}
	return (i);
}

static	size_t	ft_size_total(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	i = 0;
	while (s1[i] != '\0')
	{
		if ((ft_strchr(set, s1[i])))
			i++;
		else
			break ;
	}
	if (s1[i] == '\0')
		return (0);
	k = ft_strlen(s1) - 1;
	while (k > i)
	{
		if ((ft_strchr(set, s1[k])))
			k--;
		else
			break ;
	}
	return ((k - i) + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*result;

	result = NULL;
	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	if (set[0] == '\0')
		return (ft_strdup(s1));
	size = ft_size_total(s1, set);
	result = (char *)malloc((size + 1));
	if (!result)
		return (NULL);
	ft_memmove(result, s1 + ft_skip(s1, set), (size));
	result[size] = '\0';
	return (result);
}
