/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:16:13 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:16:13 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	to_upper(unsigned int i, char *c)
{
	*c = (char)toupper((unsigned char)*c);
}

int main(void)
{
	char string[] = "testtesqwdqwdqwdt";

	ft_striteri(string, to_upper);
	write(1, string, strlen(string));
	return 0;
}
*/