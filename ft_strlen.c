#include "libft.h"

size_t ft_strlen(const char *c)
{
    size_t i;

    i = 0;
    while(c[i] != '\0')
        i++;
    return (i);
}

/*
int main()
{
    const char *test = "test";
    size_t len = ft_strlen(test);
    size_t lenstr = strlen(test);

    printf("%d\n", len);
    printf("%d\n", lenstr);
    return 0;
}
*/