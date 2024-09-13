#include "libft.h"

int     ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return (1);
    }
    else
        return (0);
}

/*
int main(void)
{
    char c = 'A';

    printf("ft_isalpha: %d\n", ft_isalpha(c));
    printf("isalpha:    %d\n", isalpha(c));

    return 0;
}
*/