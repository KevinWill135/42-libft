/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:06:22 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/20 21:22:41 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	find;

	i = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		find = 0;
		if (haystack[i] == needle[find])
		{
			while (needle[find] == haystack[i + find] && (i + find) < len)
			{
				find++;
				if (needle[find] == '\0')
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
