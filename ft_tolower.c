#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

/*
int main()
{
    char str[] = "HELLO, WORLD!";
    int i = 0;
    printf("%s\n", str);
    while (str[i])
    {
        str[i] = ft_tolower(str[i]);
        i++;
    }
    printf("%s\n", str);
    return 0;
}
*/