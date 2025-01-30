/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:18:18 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:18:18 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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

/*
size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int main() {
    char src[] = "Hello, World!";
    char dest1[20], dest2[10];

    printf("'%s' %zu\n", dest1, ft_strlcpy(dest1, src, sizeof(dest1)));
    printf("'%s' %zu\n", dest2, ft_strlcpy(dest2, src, sizeof(dest2)));

    char dest3[20], dest4[10];
    printf("'%s' %zu\n", dest3, strlcpy(dest3, src, sizeof(dest3)));
    printf("'%s' %zu\n", dest4, strlcpy(dest4, src, sizeof(dest4)));

    return 0;
}
*/