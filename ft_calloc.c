/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:17:37 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/21 21:19:34 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	total_size;	

	total_size = nmemb * size;
	if (size != 0 && total_size / size != nmemb)
		return (NULL);
	result = (void *)malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, (nmemb * size));
	return (result);
}
