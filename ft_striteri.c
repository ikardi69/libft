/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:03:16 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/09 02:14:53 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
<<<<<<< HEAD
		f(i, &s[i]);
=======
		s[i] = f(i, s);
>>>>>>> 0e53803cd3613ea10933d1fb3ba5a02a1a9a679d
		i++;
	}
}
