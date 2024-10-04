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

#include "libft.h"

static int	compteur(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*o;
	long	n1;
	int		nb;
	int		sign;

	n1 = n;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n1 = -n1;
	}
	nb = compteur(n1);
	o = malloc(nb + 1);
	if (!o)
		return (NULL);
	o[nb] = '\0';
	while (nb > 0)
	{
		o[--nb] = (n1 % 10) + '0';
		n1 /= 10;
	}
	if (sign)
		o[0] = '-';
	return (o);
}
