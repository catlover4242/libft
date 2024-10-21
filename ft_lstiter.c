/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:25:00 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/11 16:25:00 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
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

void	to_upper(void *content)
{
	char *str = (char *)content;
	int i = 0;

	while(str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
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
	t_list *node1 = ft_lstnew(strdup("test1"));
	t_list *node2 = ft_lstnew(strdup("test2"));
	t_list *node3 = ft_lstnew(strdup("test3"));

	node1->next = node2;
	node2->next = node3;

	ft_lstiter(node1, to_upper);
	print_list(node1);
	return 0;
}
*/
