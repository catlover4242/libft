/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:25:14 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/11 16:25:14 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
	t_list *node1 = ft_lstnew("Node1");
	t_list *node2 = ft_lstnew("Node2");
	t_list *node3 = ft_lstnew("Node3");
	t_list *node4 = ft_lstnew("Node4");

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;

	printf("size : %d\n", ft_lstsize(node1));
	return 0;
}
*/