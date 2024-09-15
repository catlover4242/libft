#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t      i;
    size_t      j;
    size_t      dst_len;
    size_t      src_len;

    dst_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    j = 0;

    if (size <= dst_len)
        return (size + src_len);
    
    i = dst_len;
    while (src[j] != '\0' && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dst_len + src_len);
}
