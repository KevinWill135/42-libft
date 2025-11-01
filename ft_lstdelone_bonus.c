/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:04:41 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/01 17:59:40 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Frees the node
 * 
 * Take a node and frees with a function
 * 
 * @param lst The node to free.
 * @param del The address of the function used to delete the content.
 * @return none
*/
void	ft_lstdelone(t_list *lst, void (del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
