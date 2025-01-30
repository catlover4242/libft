/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:29:03 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/30 00:21:23 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	put_nbr_base(unsigned long long nb, char *base)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		i += put_nbr_base(nb / 16, base);
	}
	ft_print_char(base[nb % 16]);
	i++;
	return (i);
}

int	ft_print_pointer(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i += write (1, "0x", 2);
	i += put_nbr_base((unsigned long long)ptr, "0123456789abcdef");
	return (i);
}
