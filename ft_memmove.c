/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:55:06 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/18 00:29:53 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*psrc;
	char		*pdst;

	pdst = (char *)dest;
	psrc = (const char *)src;
	if (dest == src)
		return (dest);
	if (pdst > psrc && pdst < psrc + n)
	{
		while (n > 0)
		{
			n--;
			pdst[n] = psrc[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
