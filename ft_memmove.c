#include "libft.h"
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    char *d;
    const char *s;

    d = (char *)dest;
    s = (const char *)src;
    i = 0;

    if (src == NULL || dest == NULL)
        return (NULL);
    if (s < d)
        while (n-- > 0)
                d[n] = s[n];
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}
/*
int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];

    ft_memmove(dest, src, 1);
    printf("%s\n", dest);

    char dest2[20];
    memmove(dest2, src, 1);
    printf("%s\n", dest2);

    return 0;
}
*/