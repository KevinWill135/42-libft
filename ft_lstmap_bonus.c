/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 23:03:47 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/01 17:28:41 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief
 * 
 * Iterates through the list ’lst’, applies the 
 * function ’f’ to each node’s content, 
 * and creates a new list resulting of 
 * the successive applications of the function ’f’. 
 * The ’del’ function is used to delete the content of a node if needed.
 * 
 * @param lst The address of a pointer to a node.
 * @param f The address of the function applied to each node’s content.
 * @param del The address of the function used to delete a node’s content if needed.
 * @return The new list. NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newls;
	t_list	*tmp;

	newls = NULL;
	tmp = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&newls, del);
			return (NULL);
		}
		ft_lstadd_back(&newls, tmp);
		lst = lst->next;
	}
	return (newls);
}
