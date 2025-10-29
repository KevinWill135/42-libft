/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:58:46 by kde-paul          #+#    #+#             */
/*   Updated: 2025/10/29 21:23:56 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

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

	printf("\n******origin******\n");
	while (i < count)
		printf("%d ", ori[i++]);
	printf("\n");
	i = 0;
	printf("\n****** copy ******\n");
	while (i < count)
		printf("%d ", cpy[i++]);

	printf("\n");

	free(ori);
	free(cpy);
} */