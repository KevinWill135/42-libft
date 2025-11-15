/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:07:26 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/15 19:43:40 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_catptr(unsigned long long ptr, int fd)
{
	int	count;

	count = 0;
	if (!ptr)
		return (count += ft_putstr_fd("(nil)", fd));
	count += ft_putstr_fd("0x", fd);
	count += ft_putptr_base(ptr, fd);
	return (count);
}

static int	ft_cattype(va_list *arg, char c, int fd)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar_fd(va_arg(*arg, int), fd);
	else if (c == 's')
		count += ft_putstr_fd(va_arg(*arg, char *), fd);
	else if (c == 'd')
		count += ft_putnbr_fd(va_arg(*arg, int), fd);
	else if (c == 'i')
		count += ft_putnbr_base(va_arg(*arg, int), DEC, fd);
	else if (c == 'u')
		count += ft_putnbr_base(va_arg(*arg, unsigned int), DEC, fd);
	else if (c == 'x')
		count += ft_putnbr_base(va_arg(*arg, unsigned int), HEX, fd);
	else if (c == 'X')
		count += ft_putnbr_base(va_arg(*arg, unsigned int), UHEX, fd);
	else if (c == 'p')
		count += ft_catptr((unsigned long long)va_arg(*arg, void *), fd);
	else if (c == '%')
		count += ft_putchar_fd('%', fd);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	count = 0;
	if (!str)
	{
		va_end(arg);
		return (-1);
	}
	while (str[i])
	{
		if (str[i] == '%')
			count += ft_cattype(&arg, str[++i], 1);
		else
			count += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(arg);
	return (count);
}
