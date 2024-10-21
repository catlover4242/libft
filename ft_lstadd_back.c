/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:24:38 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/11 16:24:38 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	i = *lst;
	while (i -> next != NULL)
		i = i -> next;
	i -> next = new;
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

	new_node1 = ft_lstnew("bonjour");
	new_node2 = ft_lstnew("ca va ?");
	
	ft_lstadd_back(&test, new_node1);
	ft_lstadd_back(&test, new_node2);
	print_list(test);
	return(0);
}
*/