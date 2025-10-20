/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:07:27 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/18 14:13:22 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	find_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static int	count_words(char *str, char charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && find_charset(str[i], charset))
			i++;
		if (str[i])
			counter++;
		while (str[i] && !find_charset(str[i], charset))
			i++;
	}
	return (counter);
}

static char	*make_str(char *str, int start, int end)
{
	int		i;
	char	*newstr;

	newstr = malloc((end - start) + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (start < end)
	{
		newstr[i] = str[start];
		start++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	**ft_split(char *str, char c)
{
	char	**arr;
	int		start;
	int		i;
	int		j;

	arr = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && find_charset(str[i], c))
			i++;
		start = i;
		while (str[i] && !find_charset(str[i], c))
			i++;
		if (i > start)
		{
			arr[j] = make_str(str, start, i);
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}
