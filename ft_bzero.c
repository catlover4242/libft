/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 03:10:00 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/03 03:10:00 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i != n)
	{
		str[i] = '\0';
		i++;
	}
}

/*
int main() {
    char string[10] = "Hello";
    printf("avant: %s\n", string);
    ft_bzero(string, strlen(string));
    printf("apres: [%s]\n", string);
    return 0;
}
*/