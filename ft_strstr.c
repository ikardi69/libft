/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:21:32 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/04 23:10:34 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *to_find)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)s + (i - j));
		else
			j = 0;
		i++;
	}
	return (NULL);
}
