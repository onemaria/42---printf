#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t  i;
    char *str;

    str = (char *)malloc(sizeof(char) * ft_strlen(s)+1);
    if (!str)
        return NULL;
    i = 0;
    while (s[i] != '\0')
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
