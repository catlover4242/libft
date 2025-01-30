/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleblond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 03:45:00 by pleblond          #+#    #+#             */
/*   Updated: 2024/10/03 03:45:00 by pleblond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int main()
{
    char c = '5';
    printf("ft_isdigit: %d\n", ft_isdigit(c));
    printf("isdigit:    %d\n", isdigit(c));
    return 0;
}
*/
