/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 01:40:08 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/04 23:08:58 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	result = (char *)malloc((size + 1));
	if (!result)
		return (NULL);
	size = 0;
	while (s[size] != '\0')
	{
		result[size] = f(size, s[size]);
		size++;
	}
	result[size] = '\0';
	return (result);
}
