/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:15:31 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/04 17:15:31 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	char *phrase = "je suis trop beau";
	char *copy;

	// test avec une phrase //
	copy = ft_strdup(phrase);
	if (copy != NULL)
	{
		ft_putstr_fd(copy, 1);
		write(1, "\n", 1);
		free(copy);
	}

	// test avec rien //
	phrase = "";
	copy = ft_strdup(phrase);
	if (copy != NULL)
	{
		ft_putstr_fd(copy, 1);
		write(1, "\n", 1);
		free(copy);
	}
	return 0;
}

*/