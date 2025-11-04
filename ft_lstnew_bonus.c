/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:33:38 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 17:21:22 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns a new node
 *
 * The ’content’ member variable is initialized with the given parameter ’content’.
 * The variable ’next’ is initialized to NULL.
 *
 * @param content The content to store in the new node.
 * @return A pointer to the new node.
 */
t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

int main(void)
{
	t_list *first = ft_lstnew("abla");
	t_list *second = ft_lstnew("un poquito");
	t_list *third = ft_lstnew("the spanish?LOL");

	first->next = second;
	second->next = third;

	t_list *tmp = first;

	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	free(first);
	free(second);
	free(three);
	free(tmp);
} */
