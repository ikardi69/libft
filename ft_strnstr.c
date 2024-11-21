/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:34:01 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/20 10:44:24 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	if (big == little)
		return ((char *)big);
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	i = 0;
	j = ft_strlen(little);
	while (j <= len && big[i] != '\0')
	{
		if (!(ft_strncmp(&big[i], little, j)))
			return ((char *)(big + i));
		i++;
		len--;
	}
	return (NULL);
}
