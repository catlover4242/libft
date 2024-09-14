#include <stdio.h>

void    *ft_memset(void *b, int c, size_t t)
{
    size_t      i;
    unsigned char *r;

    i = 0;
    r = (unsigned char *)b;

    while (i < t)
    {
        r[i] = c;
        i++;
    }
    return b = r;
}

/*
int main()
{
    char str[50] = "Hello, world!";
    
    printf("%s\n", str);
    ft_memset(str, 'X', 5);
    printf(" %s\n", str);

    return 0;
}
*/