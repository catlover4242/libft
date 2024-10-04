/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:25:54 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:25:54 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
int main()
{
	char str[] = "test!";
	int i = 0;
	printf("%s\n", str);
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	printf("%s\n", str);
	return 0;
}
*/