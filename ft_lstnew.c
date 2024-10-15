/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:25:10 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/11 16:25:10 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
int	main()
{
	char *content = "123";
	t_list *boite;

	boite = ft_lstnew(content);
	if (boite == NULL)
	{
		printf("probleme d'allocation de memoire\n");
		return (1);
	}
	if (boite->content == content)
		printf("%s\n", boite->content);
	else
		printf("c pas bon");

	if (boite->next == NULL)
        printf("c bien NULL apres\n");
    else
        printf("le pointeur next ca vaut pas null\n");

	free(boite);
	return (0);
}
*/
