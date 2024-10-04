/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:00:00 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/03 04:00:00 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t t)
{
	size_t			i;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *)b;
	while (i < t)
	{
		r[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
int main()
{
	char str[50] = "Hello, world!";
	
	printf("%s\n", str);
	ft_memset(str, 'X', 5);
	printf(" %s\n", str);

	return 0;
}
*/