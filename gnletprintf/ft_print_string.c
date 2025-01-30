/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:29:08 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/30 00:21:25 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_print_string(va_list args)
{
	char	*str;
	int		len;

	len = 0;
	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	while (*str)
	{
		write(1, str, 1);
		str++;
		len++;
	}
	return (len);
}
