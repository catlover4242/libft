/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:22:55 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:22:55 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	debutindex(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len && ft_strchr(set, s1[i]) != NULL)
	{
		i++;
	}
	return (i);
}

static int	finindex(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len && ft_strchr(set, s1[len - i - 1]) != NULL)
	{
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		debut;
	int		fin;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	debut = debutindex(s1, set);
	fin = finindex(s1, set);
	if (fin <= debut)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (fin - debut + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + debut, fin - debut + 1);
	return (str);
}

/*
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	r;

	r = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (r);
}

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*string;
	size_t	i;

	i = 0;
	string = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

int main(void)
{
    char str[] = "rrrrbonjour tout le monderrr";
    char set[] = "r";
    char *result;

    result = ft_strtrim(str, set);
    if (result)
    {
        printf("Chaine modifiee : '%s'\n", result);
        free(result);
    }
    else
        printf("erreur\n");

    return (0);
}
*/