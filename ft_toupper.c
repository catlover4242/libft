#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}
/*
int main()
{
    char str[] = "hello, World!";
    int i = 0;
    printf("%s\n", str);
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
    printf("%s\n", str);
    return 0;
}
*/