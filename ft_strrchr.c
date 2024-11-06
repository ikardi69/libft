/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:45:23 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/06 04:29:01 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	ptr = (char *)s;
	while (i > 0)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i--;
	}
	if (ptr[i] == (unsigned char)c)
		return (ptr + i);
	return (NULL);
}
