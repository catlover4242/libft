/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:25:07 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/11 16:25:07 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*noeud;

	if (!lst || !f || !del)
		return (NULL);
	temp = NULL;
	while (lst)
	{
		noeud = ft_lstnew(NULL);
		if (!noeud)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		noeud->content = f(lst->content);
		ft_lstadd_back(&temp, noeud);
		lst = lst->next;
	}
	return (temp);
}

/*
void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void *tolower_str(void *content)
{
	int i = 0;
    char *str = (char *)content;
    char *new_str = malloc(strlen(str) + 1);

    if (!new_str)
        return NULL;
    while (str[i] != '\0')
	{
        new_str[i] = tolower((unsigned char)str[i]);
		i++;
    }
    new_str[strlen(str)] = '\0';
    return new_str;
}

int main()
{
	t_list *test = NULL;
	t_list *new_node1;
	t_list *new_node2;

	new_node1 = ft_lstnew("TEST 1");
	new_node2 = ft_lstnew("TEST 2");
	
	ft_lstadd_front(&test, new_node1);
	ft_lstadd_back(&test, new_node2);
	print_list(test);
	t_list *new_list = ft_lstmap(test, tolower_str, free);
	print_list(new_list);
	return(0);
}
*/