/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:58:46 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/01 19:30:21 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if ((count > __SIZE_MAX__ / size) || !count || !size)
		return (malloc(0));
	arr = malloc(size * count);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * count);
	return (arr);
}
/* 
#include <stdio.h>

int main(void)
{
	size_t count = 10;
	size_t size = sizeof(int);

	int *ori = calloc(count, size);
	int *cpy = ft_calloc(count, size);
	size_t i = 0;
} */