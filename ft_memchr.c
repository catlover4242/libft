#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *string;
    char test;
    size_t i;

    i = 0;
    test = (char)c;
    string = (void *)s;
    while (i < n)
    {
        if (string[i] == test)
            return ((void *)(s + i));
    }
    return (NULL);
}