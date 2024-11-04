/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:07:45 by mteffahi          #+#    #+#             */
/*   Updated: 2024/10/26 16:45:55 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_newsize(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;
	size_t	j;

	i = 0;
	j = 0;
	size = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == set[j])
			j++;
		else
			size++;
		if (set[j] == '\0')
			j = 0;
		i++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*result;
	size_t	j;
	size_t	k;

	i = ft_newsize(s1, set);
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
