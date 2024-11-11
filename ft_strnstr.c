/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:34:01 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/11 04:37:06 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	if (big == little)
		return ((char *)big);
	if (len == (size_t)-1)
		len = ft_strlen(big);
	i = 0;
	j = 0;
	while (i <= len && big[i] != '\0')
	{
		j = 0;
		printf("big[i] = %c little[0] = %c\n", big[i], little[0]);
		if (big[i] == little[j])
		{
			while (i <= len && big[i] == little[j] && (big[i] != '\0' && little[j] != '\0'))
			{
				i++;
				j++;
			}
			if (little[j] == '\0' && i <= len)
				return ((char *)big + (i - j));
			else
				break ;		//hadi kt breaki loop kamla fiha mochkil
			if (big[i - 1] == little[0])
			{
				i -= 1;
			}
		}
		else
			i++;
	}
	return (NULL);
}
