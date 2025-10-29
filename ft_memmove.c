/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:48:46 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/29 20:45:54 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (dst < src)
	{
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	else
	{
		while (len--)
			pdst[len] = psrc[len];
	}
	return ((void *)pdst);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[15];
	char *src = "Please, make me do something cool!!";
	size_t n = 20;

	printf("ori: %s\ncpy: %s\n", (char *)memmove(dst, src, n), (char *)ft_memmove(dst, src, n));
}