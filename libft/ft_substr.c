#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s2;
    const char *s1=s;
    unsigned int i;

    i = 0;
    if (start>=ft_strlen(s) || (len+start)> ft_strlen(s))
        return NULL;
    s2 = (char*)malloc(len+1);
    if (!s2)
        return NULL;
    if (len==0)
        return NULL;
    while(len>0)
    {
        s2[i]=s1[start];
        i++;
        start++;
        len--;
    }
    s2[i]='\0';
    return (s2);
}
