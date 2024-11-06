/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:57:49 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/06 04:16:17 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;
	unsigned int sz;

	if (!s || len < start)
		return (NULL);
	sz = start;
	i = 0;
	while (sz != len)
	{
		i++;
		sz++;
	}
	result = (char *)malloc(i + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (start < len && s[start] != '\0')
	{
		result[i] = s[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
