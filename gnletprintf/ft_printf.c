/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:29:14 by pleblond          #+#    #+#             */
/*   Updated: 2025/01/30 00:21:32 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static int	conversion(char c, va_list args)
{
	int		len;

	len = 0;
	if (c == 'c')
	{
		ft_print_char(va_arg(args, int));
		len++;
	}
	else if (c == 's')
		len += ft_print_string(args);
	else if (c == 'u')
		len += ft_print_unbr(args);
	else if (c == 'd' || c == 'i')
		len += ft_print_nbr(args);
	else if (c == 'p')
		len += ft_print_pointer(va_arg(args, void *));
	else if (c == 'x' || c == 'X')
		len += lequelchoisir(va_arg(args, int), c);
	else if (c == '%')
	{
		ft_print_char('%');
		len++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	va_start(args, format);
	len = 0;
	if (!format)
		return (0);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len += conversion(*format, args);
		}
		else
		{
			ft_print_char(*format);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len);
}
