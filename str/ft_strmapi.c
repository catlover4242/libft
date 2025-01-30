/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:19:38 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:19:38 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s[i] != '\0')
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char	to_upper(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	const char *str = "bonjour";
	char *result;

	result = ft_strmapi(str, to_upper);
	
	if (result != NULL)
	{
		printf("%s\n", str);
		printf("transformed: %s\n", result);
		free(result);
	}
	else
	{
		printf("ya eu un soucis chef\n");
	}

	return 0;
}
*/