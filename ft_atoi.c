#include "libft.h"

int     ft_atoi(const char *s)
{
    int     i;
    int     result;
    int     neg;

    i = 0;
    result = 0;
    neg = 1;
    while(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
        i++;
    if (s[i] == '-')
    {
        neg = -1;
        i++;
    }
    else if (s[i] == '+')
        i++;
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = (result * 10) + (s[i] - '0');
    }
    return (result * neg);
}

/*
int main()
{
    char s1[] = "+-1";

    printf("%d\n", ft_atoi(s1));
    printf("%d\n", atoi(s1));
    return 0;
}
*/
