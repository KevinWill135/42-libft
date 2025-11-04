/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:21:23 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 19:38:53 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*b1;
	const unsigned char	*b2;

	b1 = s1;
	b2 = s2;
	while (n--)
	{
		if (*b1 != *b2)
			return (*b1 - *b2);
		b1++;
		b2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t	n;
	int		s1;
	int		s2;

	// char *str1 = "Come on, one more test LOL!!";
	// char *str2 = "Come oN, one more test LOL!!";
	n = 4;
	s1 = 255;
	s2 = 255;
	// printf("ori: %d\ncpy: %d\n", memcmp(str1, str2, n),
	ft_memcmp(str1, str2, n));
	printf("ori: %d\ncpy: %d\n", memcmp(&s1, &s2, n),
	ft_memcmp(&s1, &s2, n));
}
 */