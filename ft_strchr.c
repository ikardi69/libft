/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:45:08 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/05 02:53:36 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	size;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	size = ft_strlen(s);
	while (i <= size)
	{
		if (s[i] == (char)c)
			return (ptr + i);
		i++;
	}
	if (ptr[i] == (char)c)
		return (ptr + i);
	return (NULL);
}
