/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:53:07 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 17:21:11 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last node of the list.
 *
 * @param lst The beginning of the list.
 * @return The last node of the list.
 */
t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int main(void)
{
	t_list *n1 = ft_lstnew("first");
	t_list *n2 = ft_lstnew("second");
	t_list *n3 = ft_lstnew("third");
	t_list *n4 = ft_lstnew("forth");
	t_list *n5 = ft_lstnew("the last one hahahahh");

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;

	t_list *last = ft_lstlast(n2);

	printf("The last in the list: %s\n", (char *)last->content);
	//printf("testing\n");

	free(n1);
	free(n2);
	free(n3);
	free(n4);
} */
