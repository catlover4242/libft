/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:26:55 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:26:55 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int main()
{
	char str[] = "hello, World!";
	int i = 0;
	printf("%s\n", str);
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	printf("%s\n", str);
	return 0;
}
*/