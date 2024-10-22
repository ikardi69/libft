/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:55:38 by mteffahi          #+#    #+#             */
/*   Updated: 2024/10/21 18:58:01 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	i = 0;
	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (i < n && ptr1[i] == ptr2[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}