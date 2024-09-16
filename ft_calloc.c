#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (count == 0 || size == 0)
        return (malloc(0));
    ptr = (void *)malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_memset((unsigned char *)ptr, 0, count * size);
    return (ptr);
}