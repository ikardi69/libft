/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:02:12 by mteffahi          #+#    #+#             */
/*   Updated: 2024/10/21 18:05:00 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	while (i < n && ptr[i] != '\0')
	{
		ptr[i] = '\0';
		i++;
	}
}