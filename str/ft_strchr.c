/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:14:43 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:14:43 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

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

/*
int main()
{
    const char *str = "Bonjour, comment ça va ?";
    char c = 'o';
    char *result_vraie = strchr(str, c);
    char *result_mienne = ft_strchr(str, c);

    if (result_vraie != NULL)
        printf("%c %p\n", c, result_vraie);
    else
        printf("%c\n", c);
    if (result_mienne != NULL)
        printf("%c %p\n", c, result_mienne);
    else
        printf("%c\n", c);
    return 0;
}
*/