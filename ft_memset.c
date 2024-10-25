/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:57:50 by mteffahi          #+#    #+#             */
/*   Updated: 2024/10/21 18:04:47 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	while (i < n && ptr[i] != '\0')
	{
		ptr[i] = c;
		i++;
	}
}