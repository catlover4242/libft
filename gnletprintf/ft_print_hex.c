/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:28:47 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/30 00:21:16 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_print_hex(unsigned int nb, char *base)
{
	int	i;

	i = 0;
	if (nb >= 16)
		i += ft_print_hex(nb / 16, base);
	ft_print_char(base[nb % 16]);
	i++;
	return (i);
}

int	lequelchoisir(unsigned int nb, char c)
{
	if (c == 'x')
		return (ft_print_hex(nb, "0123456789abcdef"));
	if (c == 'X')
		return (ft_print_hex(nb, "0123456789ABCDEF"));
	return (0);
}
