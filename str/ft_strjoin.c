/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:16:53 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:16:53 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	i;
	size_t	u;

	i = 0;
	u = 0;
	string = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!string)
		return (NULL);
	while (s1[i] != '\0')
	{
		string[u] = s1[i];
		u++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		string[u] = s2[i];
		u++;
		i++;
	}
	string[u] = '\0';
	return (string);
}

/*
size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	main()
{
	char *s1 = "test";
	char *s2 = "bjr";
	char *result = ft_strjoin(s1, s2);

	if (result)
	{
		printf("%s\n", result);
	}
	else
	{
		printf("probleme de l'allocation memoire");
	}
	return 0;
}
*/