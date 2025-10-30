/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:51:05 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/30 20:21:22 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
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

#include <stdio.h>

void	ft_changecase(unsigned int i, char *s)
{
	printf("char: %c\n", s[i]);
	if (ft_isalpha(s[i]))
	{
		if (s[i] > 64 && s[i] < 91)
			s[i] += 32;
		else
			s[i] -= 32;
	}
}

int main(void)
{
	char str[13] = "You can do it";
	ft_striteri(str, ft_changecase);

	printf("test: %s\n", str);
}