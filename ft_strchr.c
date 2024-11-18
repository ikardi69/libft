/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:45:08 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/18 23:54:57 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i++;
	}
	if (ptr[i] == (unsigned char)c)
		return (ptr + i);
	return (NULL);
}
