#include "libft.h"

int     ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
    {
        return (1);
    }
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
