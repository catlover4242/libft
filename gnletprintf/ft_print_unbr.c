/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:29:11 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/30 00:21:29 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_unbr_rec(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
	{
		len += ft_unbr_rec(nb / 10);
	}
	ft_print_char((nb % 10) + '0');
	len++;
	return (len);
}

int	ft_print_unbr(va_list args)
{
	int				len;
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	len = 0;
	len += ft_unbr_rec(nb);
	return (len);
}
