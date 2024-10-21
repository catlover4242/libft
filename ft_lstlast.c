/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:25:03 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/11 16:25:03 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = (void *)content;
	list->next = NULL;
	return (list);
}

int main()
{
    t_list *list = ft_lstnew(strdup("Node 1"));
    list->next = ft_lstnew(strdup("Node 2"));
    list->next->next = ft_lstnew(strdup("Node 3"));

	char *str = ft_lstlast(list) -> content;
	printf("%s\n",str);
	return(0);
}
*/