/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:20:36 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:20:36 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i])
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main()
{
	char str1[] = "bonjouhjtui";
	char str2[] = "bonjout";
	char str3[] = "bjr";

	printf("Comparaison 1 : %d\n", ft_strncmp(str1, str2, 10));
	printf("Comparaison 2 : %d\n", ft_strncmp(str2, str3, 7));
	printf("Comparaison 3 : %d\n", ft_strncmp(str1, str3, 7));

	printf("Comparaison 1 : %d\n", strncmp(str1, str2, 10));
	printf("Comparaison 2 : %d\n", strncmp(str2, str3, 7));
	printf("Comparaison 3 : %d\n", strncmp(str1, str3, 7));
}
*/