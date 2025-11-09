/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:16:34 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/09 14:30:42 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 *
 * Iterates through the list ’lst’ and
 * applies the function ’f’ to the content of each node.
 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function to apply to each node’s content.
 * @return none
 */
void	ft_lstiter(t_list *lst, void (f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f(&tmp->content);
		tmp = tmp->next;
	}
}
