/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:21:23 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/29 20:40:25 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
	char *str1 = "Come on, one more test LOL!!";
	char *str2 = "Come oN, one more test LOL!!";
	size_t n = 10;

	/* int	*s1 = {1, 2, 3, 4, 5};
	int	*s2 = {1, 2, 3, 4, 5};

	printf("ori: %d\ncpy: %d\n", memcmp(str1, str2, n), ft_memcmp(str1, str2, n));
	//printf("ori: %d\ncpy: %d\n", memcmp(s1, s2, 5), ft_memcmp(s1, s2, 5));
} */