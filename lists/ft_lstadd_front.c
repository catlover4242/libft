/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:24:45 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/11 16:24:45 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int main()
{
	t_list *test = NULL;
	t_list *new_node1;
	t_list *new_node2;

	new_node1 = ft_lstnew("Node 1");
	new_node2 = ft_lstnew("Node 2");
	
	ft_lstadd_front(&test, new_node1);
	ft_lstadd_front(&test, new_node2);
	print_list(test);
	return(0);
}
*/