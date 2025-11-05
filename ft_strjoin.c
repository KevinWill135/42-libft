/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 22:00:05 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/05 19:06:30 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It'll join two strings
 *
 * This function join two strings in a new string
 *
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return Returns a new string that was joined two old string.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len);
	ft_strlcat(str, s2, len);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str1 = "come on, lets ";
	char *str2 = "change the world";
	char *joined = ft_strjoin(str1, str2);

	printf("test: %s\n", joined);

	free(joined);
} */
