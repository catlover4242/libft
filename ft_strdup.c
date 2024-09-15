#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *string;
    size_t  i;

    i = 0;
    if (!(string = malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    while (s[i] != '\0')
    {
        string[i] = s[i];
        i++;
    }
    string = '\0';
    return (string);
}