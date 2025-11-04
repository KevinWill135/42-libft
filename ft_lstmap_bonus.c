/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:03:47 by kde-paul          #+#    #+#             */
/*   Updated: 2025/11/04 17:21:15 by kde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newls;
	t_list *tmp;

	newls = NULL;
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
/*
#include <stdio.h>

void *touppercase(void *cont)
{
	char *s;
	int i;

	s = ft_strdup(cont);
	i = -1;
	while (s[++i])
		s[i] = (char)ft_toupper((unsigned char)s[i]);
	return (s);
}

void delete(void *lst)
{
	free(lst);
}

int main(void)
{
	t_list *one = ft_lstnew(ft_strdup("blablabla"));
	t_list *two = ft_lstnew(ft_strdup("testing"));
	t_list *three = ft_lstnew(ft_strdup("your self"));

	ft_lstadd_back(&one, two);
	ft_lstadd_back(&two, three);

	t_list *tmp = one;

	printf("First list\n");
	while (one)
	{
		printf("%s ", (char *)one->content);
		one = one->next;
	}

	t_list *new = ft_lstmap(tmp, touppercase, delete);
	printf("\nNew list\n");
	while (new)
	{
		printf("%s ", (char *)new->content);
		new = new->next;
	}
	printf("\n");

	ft_lstclear(&one, delete);
	ft_lstclear(&new, delete);
}
*/
