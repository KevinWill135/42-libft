/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 16:49:45 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/01 16:48:42 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Adds a node in a list
 * 
 * Adds the node ’new’ at the beginning of the list.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param new The address of a pointer to the node to be added.
 * @return none
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/* 
#include <stdio.h>

int main(void)
{
	int one_1 = 1;
	int two_2 = 2;
	int three_3 = 3;
	int four_4 = 4;
	int ten_10 = 10;

	t_list *one = ft_lstnew(&one_1);
	t_list *two = ft_lstnew(&two_2);
	t_list *three = ft_lstnew(&three_3);
	t_list *four = ft_lstnew(&four_4);
	t_list *ten = ft_lstnew(&ten_10);

	one->next = two;
	two->next = three;
	three->next = four;
	ft_lstadd_front(&one, ten);

	t_list *tmp = ten;
	while (tmp)
	{
		printf("%d\n", *(int *)tmp->content);
		tmp = tmp->next;
	}

	free(one);
	free(two);
	free(three);
	free(four);
	free(ten);
	free(tmp);
} */