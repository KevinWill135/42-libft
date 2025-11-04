/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:51:05 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 14:34:01 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Modifies the each string's character
 *
 * Applies the function f to each character of the string s.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 * @return None.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	ft_changecase(unsigned int i, char *s)
{
	(void)i;
	if (ft_isalpha(*s))
	{
		if (*s > 64 && *s < 91)
			*s += 32;
		else
			*s -= 32;
	}
}

int	main(void)
{
	char str[] = "ShOW me what you can do";
	ft_striteri(str, ft_changecase);

	printf("test: %s\n", str);
} */
