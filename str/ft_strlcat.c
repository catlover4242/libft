/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:17:42 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:17:42 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = 0;
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dst_len + src_len);
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
    char dest1[50] = "Bonjour, ";
    char dest2[50] = "Bonjour, ";
    const char *src = "comment ça va ?";
    size_t size = 50; // Taille maximale de destination

    // Appel à la fonction standard strlcat
    size_t result_std = strlcat(dest1, src, size);
    
    // Appel à ta fonction ft_strlcat
    size_t result_custom = ft_strlcat(dest2, src, size);

    // Affichage des résultats
    printf("Standard strlcat:\n");
    printf("Résultat : %zu, Chaîne : '%s'\n", result_std, dest1);

    printf("\nCustom ft_strlcat:\n");
    printf("Résultat : %zu, Chaîne : '%s'\n", result_custom, dest2);

    return 0;
}
*/