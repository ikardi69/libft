/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:45:23 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/08 04:51:57 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_size(long n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	*ft_zero(char *r)
{
	r = (char *)malloc(2);
	if (!r)
		return (NULL);
	r[0] = '0';
	return (r);
}

static	char	*conv_nb(long nbr, char *r, size_t size, int sign)
{
	r[size] = '\0';
	size--;
	while (nbr != 0)
	{
		r[size] = nbr % 10 + 48;
		nbr /= 10;
		size--;
	}
	if (sign == -1)
		r[size] = '-';
	return (r);
}

char	*ft_itoa(int n)
{
	size_t	size;
	long	nbr;
	char	*r;
	int		sign;

	nbr = n;
	r = NULL;
	if (nbr == 0)
	{
		r = ft_zero(r);
		return (r);
	}
	if (n < 0)
	{
		sign = -1;
		nbr *= -1;
		size = nbr_size(nbr) + 1;
	}
	else
		size = nbr_size(nbr);
	r = (char *)malloc((size + 1));
	if (!r)
		return (NULL);
	return (conv_nb(nbr, r, size, sign));
}
