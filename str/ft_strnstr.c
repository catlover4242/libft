/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:21:25 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:21:25 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0' && haystack[i + j] == needle[j]
				&& (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int main() {
    const char *haystack = "Hello, world!";
    const char *needle1 = "world";
    const char *needle2 = "Hello";

    size_t len = 1;

    char *result_std1 = strnstr(haystack, needle1, len);
    char *result_std2 = strnstr(haystack, needle2, len);

    char *result_custom1 = ft_strnstr(haystack, needle1, len);
    char *result_custom2 = ft_strnstr(haystack, needle2, len);

    printf("Searching for '%s': %s\n", needle1, result_std1);
    printf("Searching for '%s': %s\n", needle2, result_std2);

    printf("Searching for '%s': %s\n", needle1, result_custom1);
    printf("Searching for '%s': %s\n", needle2, result_custom2);
    return 0;
}
*/