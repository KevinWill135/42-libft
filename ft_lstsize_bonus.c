/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:51:38 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 17:21:27 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of nodes in the list
 *
 * @param lst The beginning of the list
 * @return Returns the list size
 */
int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	t_list *one = ft_lstnew("bla");
	t_list *two = ft_lstnew("ble");
	t_list *three = ft_lstnew("bli");
	t_list *four = ft_lstnew("blo");
	t_list *five = ft_lstnew("blu");
	t_list *six = ft_lstnew("cla");

	ft_lstadd_back(&one, two);
	ft_lstadd_back(&two, three);
	ft_lstadd_back(&three, four);
	ft_lstadd_back(&four, five);
	ft_lstadd_back(&five, six);

	// one->next = two;
	// two->next = three;
	// three->next = four;
	// four->next = five;
	// five->next = six;

	int length = ft_lstsize(one);

	printf("%d\n", length);

	free(one);
	free(two);
	free(three);
	free(four);
	free(five);
	free(six);
} */
