/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:00:00 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/03 04:00:00 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (n)
		{
			str1++;
			str2++;
		}
	}
	return (0);
}

/*
int main() {
    const char test1[] = "abcde";
    const char test2[] = "abCde";

    int result = ft_memcmp(test1, test2, 5);

    if (result < 0) {
        printf("test1 est avant test2\n");
    } 
	else if (result > 0) {
        printf("test1 est après test2\n");
    } 
	else {
        printf("test1 et test2 sont pareils\n");
    }
    return 0;
}
*/