#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *str;

    i = 0;
    while (s[i] != '\0')
        i++;
    
    str = (char *)malloc((i + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    
    i = 0;
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}