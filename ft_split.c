/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:07:27 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/01 18:58:15 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Splits strings
 * 
 * It'll split a string and return an array with this splitted string
 * str
 * @param str The string to be split.
 * @param c The delimiter character.
 * @return It'll the new array with splitted string.
*/
static int	count_words(char const *str, char charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == charset))
			i++;
		if (str[i])
			counter++;
		while (str[i] && (str[i] != charset))
			i++;
	}
	return (counter);
}

static char	*make_str(char const *str, int start, int end)
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

static void	frees_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

char	**ft_split(char const *str, char c)
{
	char	**arr;
	int		start;
	int		i;
	int		j;

	arr = ft_calloc((count_words(str, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == c))
			i++;
		start = i;
		while (str[i] && (str[i] != c))
			i++;
		if (i > start)
		{
			arr[j] = make_str(str, start, i);
			if (!arr[j++])
				return (frees_str(arr), NULL);
		}
	}
	return (arr);
}
/* 
#include <stdio.h>

int main(void)
{
	char const *str = "I need to test this function";
	char c = ' ';
	char **arr = ft_split(str, c);
	int i = 0;

	printf("\nTESTING\n\n");
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		free(arr[i++]);
	}
} */