/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:45:23 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/20 10:58:26 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*ptr;

	i = ft_strlen(s);
	ptr = (unsigned char *)s;
	while (i > 0)
	{
		if (ptr[i] == (unsigned char)c)
			return ((char *)ptr + i);
		i--;
	}
	if (ptr[i] == (unsigned char)c)
		return ((char *)ptr + i);
	return (NULL);
}
