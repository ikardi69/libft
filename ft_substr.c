/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:57:49 by mteffahi          #+#    #+#             */
/*   Updated: 2024/10/31 21:24:05 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	if (!s || len < start)
		return (NULL);
	i = 0;
	result = (char *)malloc(len - start);
	if (!result)
		return (NULL);
	while (start < len)
	{
		result[i] = s[start];
		i++;
		start++;
	}
	result[len] = '\0';
	return (result);
}
