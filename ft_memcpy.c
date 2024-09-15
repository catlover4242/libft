#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    char *d;
    const char *s;

    d = (char *)dest;
    s = (char *)src;
    i = 0;
    if (src == NULL && dest == NULL)
        return (NULL);
    while (i != n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}
/*
int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_memcpy(dest, src, strlen(src) + 1);
    printf("%s\n", src);
    printf("%s\n", dest);
    return 0;
}
*/