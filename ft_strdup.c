/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 21:10:55 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 14:34:00 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	return (ft_strcpy(str, s1));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "Copy me to anyone destiny please!!";
	char *ori = strdup(str);
	char *cpy = ft_strdup(str);

	printf("ori: %s\ncpy: %s\n", ori, cpy);

	free(ori);
	free(cpy);
} */
