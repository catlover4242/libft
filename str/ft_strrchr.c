/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:22:17 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:22:17 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
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

int main()
{
	const char *str = "Bonjour ca va?";
	char o = 'o';

	char *result = ft_strrchr(str, o);
	char *resultt = strrchr(str, o);
	if (resultt)
	{
		printf("Derniere occurrence trouvee '%c' : %s\n", o, resultt);
	}
	else
		printf("jai pas trouve dsl");

	if (result)
	{
		printf("Derniere occurrence trouvee '%c' : %s\n", o, result);
	}
	else
		printf("jai pas trouve dsl");
	return 0;
}
*/