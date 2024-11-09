/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:07:45 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/09 05:55:21 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_last_size(char const *s1, char const *set, size_t start)
{
	int	end;
	size_t	j;
	//size_t	size;

	end = ft_strlen(s1);
	j = ft_strlen(set);
	while (end > 0)
	{
		while (s1[end] == set[j])
		{
			j--;
			end--;
		}
		if (j == 0 || end == 0)
			break;
	}
	printf("end = %d", end);
	return (end);
}

static size_t	ft_start_newsize(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;
	size_t	j;

	i = 0;
	j = 0;
	size = 0;
	while (s1[i] != '\0')
	{
		while (s1[i] == set[j])
		{
			i++;
			j++;
		}
		if (set[j] == '\0')
			size++;
		i++;
	}
		printf("start = %zu", size);
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*result;
	size_t	j;
	size_t	k;

	i = ft_start_newsize(s1, set) - ft_last_size(s1, set);
	printf("%zu\n", i);
	result = (char *)malloc((i + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == set[j])
			j++;
		else
			result[k++] = s1[i];
		if (set[j] == '\0')
			j = 0;
		i++;
	}
	result[k] = '\0';
	return (result);
}
