#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] == s2[i] && s1[i])
    {
        if (i < (n - 1))
            i++;
        else
            return (0);
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
    char *str1 = "Boajour";
    char *str2 = "Bon";
    size_t n = 3;
    
    int result = ft_strncmp(str1, str2, n);
    
    if (result == 0)
        printf("Les %zu premiers caractères sont identiques.\n", n);
    else if (result < 0)
        printf("'%s' est inférieur à '%s' dans les %zu premiers caractères.\n", str1, str2, n);
    else
        printf("'%s' est supérieur à '%s' dans les %zu premiers caractères.\n", str1, str2, n);

    return 0;
}
*/