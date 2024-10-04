/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 04:00:00 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/03 04:00:00 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*string;
	char	test;
	size_t	i;

	i = 0;
	test = (char)c;
	string = (char *)s;
	while (i < n)
	{
		if (string[i] == test)
			return ((void *)(string + i));
		i++;
	}
	return (NULL);
}
