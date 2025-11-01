/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:58:39 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/01 16:48:38 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Adds a node at the end of the list.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param new The address of a pointer to the node to be added.
 * @return none
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*added;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	added = *lst;
	while (added->next)
		added = added->next;
	added->next = new;
}
