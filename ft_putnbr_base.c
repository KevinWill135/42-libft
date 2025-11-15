/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:13:11 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/15 19:33:49 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_changebase(ssize_t nb, char *base, int baselen, int *count)
{
	if (nb >= baselen)
		ft_changebase(nb / baselen, base, baselen, count);
	nb = nb % baselen;
	ft_putchar_fd(base[nb], 1);
	(*count)++;
}
/**
 * @brief Converts a decimal base to any base
 * 
 * It'll convert the decimal number passed as parameter to
 * any number base.
 * 
 * @param nbr The number that will be convert.
 * @param base The base that will be used to convert the nbr.
 * @param fd The file descriptor.
 * @return A count of printed char.
*/
int	ft_putnbr_base(ssize_t nbr, char *base, int fd)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', fd);
		count++;
	}
	ft_changebase(nbr, base, ft_strlen(base), &count);
	return (count);
}
