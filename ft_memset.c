/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:11:03 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/20 21:22:41 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = b;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
