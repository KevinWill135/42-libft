/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:52:57 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/29 20:33:48 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*b;

	i = 0;
	b = s;
	while (i < n)
	{
		if (*b == (unsigned char)c)
			return ((void *)b);
		b++;
		i++;
	}
	return (NULL);
}
/* 
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10] = "testing";
	int c = 'g';
	size_t n = 6;

	printf("ori: %s\ncpy: %s\n", (char *)memchr(str, c, n), (char *)ft_memchr(str, c, n));
} */