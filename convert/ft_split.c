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

#include "../libft.h"

int	compteur(char const *str, char sep)
{
	int	compte;

	compte = 0;
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		if (*str)
			compte++;
		while (*str && *str != sep)
			str++;
	}
	return (compte);
}

char	*mallocmot(char const *str, char sep)
{
	int		len;
	char	*word;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (len--)
		word[len] = str[len];
	return (word);
}

void	*free_split(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

char	**fill_split(char **tab, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			tab[i] = mallocmot(s, c);
			if (!tab[i])
				return (free_split(tab, i - 1));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		mots;
	char	**tab;

	if (!s)
		return (NULL);
	mots = compteur(s, c);
	tab = (char **) malloc(sizeof(char *) * (mots + 1));
	if (!tab)
		return (NULL);
	return (fill_split(tab, s, c));
}

/*
int main() {
    char str[] = "salut ca va les copains";
    char sep = ' ';
    char **result;
    int i = 0;

    result = ft_split(str, sep);

    if (!result) {
        printf("probleme d'allocation\n");
        return 1;
    }

    while (result[i]) 
	{
        printf("%d %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return 0;
}
*/