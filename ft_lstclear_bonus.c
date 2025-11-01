/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:08:11 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/01 17:59:33 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Deletes and frees the given node.
 * 
 * This function deletes and frees any given node and all its successors, using the function 'del'.
 * 
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of the node.
 * @return none
*/
void	ft_lstclear(t_list **lst, void (del)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (lst && del)
	{
		curr = *lst;
		while (curr)
		{
			next = curr->next;
			ft_lstdelone(curr, del);
			curr = next;
		}
		*lst = NULL;
	}
}
