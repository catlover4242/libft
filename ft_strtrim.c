#include "libft.h"

static int  prout(char const *s1, char const *set)
{
    size_t      i;
    size_t      len;

    i = 0;
    len = strlen(s1);
    while (i < len && ft_strchr(set, s1[i]) != NULL)
    {
        i++;
    }
    return (i);
}

static int  prouuut(char const *s1, char const *set)
{
    size_t      i;
    size_t      len;

    i = 0;
    len = strlen(s1);
    while (i < len && ft_strchr(set, s1[len - i - 1]) != NULL)
    {
        i++;
    }
    return (len - i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int     debut;
    int     fin;
    char    *str;

    if (s1 == NULL || set == NULL)
        return (NULL);
    
    debut = prout(s1, set);
    fin = prouuut(s1, set);

    if (fin <= debut)
        return (ft_strdup(""));

    str = (char *)malloc(sizeof(char) * (fin - debut + 1));
    if (str == NULL)
        return (NULL);
    ft_strlcpy(str, s1 + debut, fin - debut + 1);
    return (str);
}