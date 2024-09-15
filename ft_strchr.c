#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int     i;

    i = 0;
    while(s[i] != '\0')
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == (char)c)
        return ((char *)&s[i]);
    return (NULL);
}
/*
int main()
{
    const char *str = "Bonjour, comment ça va ?";
    char c = 'o';

    // Appel de la fonction standard strchr
    char *result_vraie = strchr(str, c);
    // Appel de votre fonction ft_strchr
    char *result_mienne = ft_strchr(str, c);

    if (result_vraie != NULL)
        printf("%c %p\n", c, result_vraie);
    else
        printf("%c\n", c);

    if (result_mienne != NULL)
        printf("%c %p\n", c, result_mienne);
    else
        printf("%c\n", c);

    return 0;
}
*/