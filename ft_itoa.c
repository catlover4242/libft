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
