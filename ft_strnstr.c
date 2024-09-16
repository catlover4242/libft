#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t      i;
    size_t      j;

    i = 0;
    j = 0;
    if (!haystack || !needle)
        return (NULL);
    while (haystack[i] != '\0' && i < len)
    {
        if (haystack[i] == needle[0])
        {
            while (needle[j] != '\0' && haystack[i + j] == needle[j] && i + j < len)
            {
                if (needle[j + 1] == '\0')
                    return ((char *)&haystack[i]);
            }
        }
        i++;
    }
    return (NULL);
}