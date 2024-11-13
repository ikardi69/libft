/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:17:07 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/13 04:03:21 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0 || size == 1)
		return (ft_strlen(src) + ft_strlen(dst));
	/*if (size > ft_strlen(src))
		size = ft_strlen(src);*/
	i = ft_strlen(dst);
	j = 0;
	printf("size = %zu\n", size);
	while (i < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
