#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int ft_isalnum(int c)
{
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return (1);
    }
    else
        return (0);
}
/*
int main()
{
    char c = '9';

    printf("%d\n", ft_isalnum(c));
    printf("%d\n", isalnum(c));
    return 0;
}
*/