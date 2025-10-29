/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:11:03 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/29 20:56:21 by kde-paul         ###   ########.fr       */
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
/* 
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str = "blablabla!!";
	int c = 32;
	size_t n  = 5;

	char *origin = memset(str, c, n);
	char *copy = ft_memset(str, c, n);

	//printf("ori: %s\ncpy: %s\n", (char *)memset(str, c, n), (char *)ft_memset(str, c, n));
	printf("ori: %s\ncpy: %s\n", origin, copy);
} */