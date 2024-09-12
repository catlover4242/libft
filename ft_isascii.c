#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int     ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    else
        return (0);
}
/*
int main()
{
    char c = 'e';

    printf("%d\n", ft_isascii(c));
    printf("%d\n", isascii(c));
    return (0);
}
*/
