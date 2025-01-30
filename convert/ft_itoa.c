/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 03:50:00 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/03 03:50:00 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	msize(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = msize(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	if (n == 0)
		ptr[0] = '0';
	while (n > 0)
	{
		ptr[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (ptr);
}

/*
char	*ft_strdup(const char *s)
{
	char	*string;
	size_t	i;

	i = 0;
	string = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	int		n1 = 12345;
	int		n2 = -54321;
	int		n3 = 0;
	int		n4 = -2147483648;
	char	*str;

	str = ft_itoa(n1);
	if (str)
	{
		printf("n1 = %d -> \"%s\"\n", n1, str);
		free(str);
	}

	str = ft_itoa(n2);
	if (str)
	{
		printf("n2 = %d -> \"%s\"\n", n2, str);
		free(str);
	}

	str = ft_itoa(n3);
	if (str)
	{
		printf("n3 = %d -> \"%s\"\n", n3, str);
		free(str);
	}

	str = ft_itoa(n4);
	if (str)
	{
		printf("n4 = %d -> \"%s\"\n", n4, str);
		free(str);
	}
	return (0);
}
*/