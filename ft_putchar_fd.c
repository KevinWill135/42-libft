/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:19:07 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 14:34:01 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the character c
 *
 * Outputs the character ’c’ to the specified file descriptor.
 *
 * @param c The character to output.
 * @param fd The file descriptor on wich to write.
 * @return None.
 */
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
