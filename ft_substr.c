/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 22:19:16 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 14:34:01 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Return a substring from other
 *
 * This function, returns a new substring from other.
 *
 * @param s The original string from which to create the substring.
 * @param start The starting index of the substring within ’s’.
 * @param len The maximum length of the substring.
 * @return It'll return the substring
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= slen)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > (slen - start))
		len = slen - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len && s[start])
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "Let me see what u can do ;)";
	char *sub = ft_substr(str, 3, 0);

	printf("test: %s\n", sub);

	free(sub);
} */
