/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:34:01 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/04 23:09:37 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little)
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && big[i] != '\0')
	{
		while (big[i] == little[j])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + (i - j));
		else
			j = 0;
		i++;
	}
	return (NULL);
}
