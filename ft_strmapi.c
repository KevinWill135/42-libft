/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 12:01:09 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 19:37:34 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new modified string
 *
 * Applies the function f to each character of the string s.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications of ’f’.
 * Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char	ft_hot13(unsigned int i, char c)
{
	(void)i;
	if (ft_isalpha(c))
	{
		if ((c > 76 && c < 91) || (c > 108 && c < 123))
			c -= 13;
		else
			c += 13;
	}
	return (c);
}

int	main(void)
{
	char *str = "";
	//char *str2 = "ZZZZzzzzzz";
	char *new = ft_strmapi(str, ft_hot13);

	printf("test: %s\n", new);

	free(new);
} */
