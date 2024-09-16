#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t      i;
    size_t      r;

    r = ft_strlen(src);
    i = 0;
    if (!src || !dest)
        return (0);
    if (size > 0)
    {
        while(src[i] && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (r);
}