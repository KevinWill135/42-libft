/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:22:51 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 19:43:37 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	count++;
	return (count);
}

/**
 * @brief Converts a number in a string.
 *
 * It'll convert the number in a string and handle negative numbers.
 *
 * @param n The integer to convert.
 * @return This function return the new string.
 */
char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = ft_nbrlen(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	str[len] = '\0';
	len--;
	while (str[len] != '-' && len >= 0)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}
/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	long n = INT_MAX;
	char *str = ft_itoa(n);

	printf("test: %s\n", str);

	free(str);
}*/
