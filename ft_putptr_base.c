/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:32:46 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/15 19:34:02 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putbase(unsigned long long ptr, char *base, int *count, int fd)
{
	unsigned long long	baselen;

	baselen = ft_strlen(base);
	if (ptr >= baselen)
		ft_putbase(ptr / baselen, base, count, fd);
	ptr = ptr % baselen;
	ft_putchar_fd(base[ptr], fd);
	(*count)++;
}
/**
 * @brief Converts the decimal base of PTR
 * 
 * The address that came with decimal base will be
 * convert in hexadecimal base and will print the pointer address.
 * 
 * @param ptr A void pointer.
 * @param fd The file descriptor.
 * @return A count of printed char.
*/
int	ft_putptr_base(unsigned long long ptr, int fd)
{
	int	count;

	count = 0;
	ft_putbase(ptr, HEX, &count, fd);
	return (count);
}
