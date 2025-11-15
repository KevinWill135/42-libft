/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nb_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:15:34 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/15 19:38:08 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Shows number length
 * 
 * This function will show how many numbers there is in my nb.
 * 
 * @param nb Number that will be counted.
 * @return A interger with number count.
*/
int	ft_count_nb_len(size_t nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 9)
	{
		count++;
		nb /= 10;
	}
	count++;
	return (count);
}
