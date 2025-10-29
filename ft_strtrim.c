/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:25:25 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/29 21:49:13 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	int	i;
	int	j;

	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[start] == set[j])
				start++;
			if (s1[end] == set[j])
				end--;
			j++;
		}
		i++;
	}
	return (ft_substr(s1, start, end - start + 1));
}
/* 
#include <stdio.h>

int main(void)
{
	char *str = "blablaLets see what this do LOL!!!";
	char *set = "blaLO!";
	char *trimmed = ft_strtrim(str, set);

	printf("test: %s\n", trimmed);

	free(trimmed);
} */