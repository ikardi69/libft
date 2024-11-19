/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:36:50 by mteffahi          #+#    #+#             */
/*   Updated: 2024/11/19 02:42:47 by mteffahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(const char *str, size_t i, int *sign)
{
	*sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		return (1);
	}
	return (0);
}

static int	ft_checklong(size_t counter, long long nbr, int sign)
{
	if (nbr > LL_MAX || (sign == 1 && counter >= 20))
		return (-1);
	else if (nbr - 1 > LL_MAX || (sign == -1 && counter >= 20))
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	long long	nbr;
	size_t		counter;

	i = 0;
	nbr = 0;
	counter = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (ft_sign(str, i, &sign))
		i++;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - 48;
		counter++;
		if (ft_checklong(counter, nbr, sign) <= 0)
			return (ft_checklong(counter, nbr, sign));
		i++;
	}
	return ((int)nbr * sign);
}
