/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:15:34 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/01 18:42:28 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/* 
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[15];
	char *src = "Please, make me do something cool!!";
	size_t n = 20;

	printf("ori: %s\ncpy: %s\n", (char *)memcpy(dst, src, n), 
	(char *)ft_memcpy(dst, src, n));
} */