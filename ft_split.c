/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:13:49 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:13:49 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	compteur(const char *s, char c)
{
	int	i;
	int	compteuur;

	i = 0;
	compteuur = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			compteuur++;
		}
		i++;
	}
	return (compteuur);
}

static char	*get_word(const char *s, int debut, int fin)
{
	int		len;
	int		i;
	char	*mot;

	i = 0;
	len = fin - debut;
	mot = (char *)malloc((len + 1) * sizeof(char));
	if (!mot)
		return (NULL);
	while (i < len)
	{
		mot[i] = s[debut + i];
		i++;
	}
	mot[len] = '\0';
	return (mot);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		index;
	int		compteurmot;
	char	**res;

	i = 0;
	start = 0;
	index = 0;
	compteurmot = compteur(s, c);
	res = (char **)malloc((compteurmot + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			res[index] = get_word(s, start, i + 1);
		}
		i++;
	}
	res[compteurmot] = NULL;
	return (res);
}

/*
int main()
{
	char **result = ft_split("test,bonjour,ca,va", ',');
	int i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
