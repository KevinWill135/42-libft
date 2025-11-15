/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:24:32 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/15 19:42:48 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	size_t	count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
		count++;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
	count += ft_count_nb_len(nb);
	return (count);
}
