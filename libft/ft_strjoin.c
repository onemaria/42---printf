#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *p;
    const char *xs1=s1;
    const char *xs2=s2;
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (ft_strlen(xs1)==0 && ft_strlen(xs2)>0)
        return (char*)s2;
    if (ft_strlen(xs2)==0 && ft_strlen(xs1)>0)
        return (char*)s1;
    if (ft_strlen(xs1)==0 && ft_strlen(xs2)==0)
        return NULL;
    p=(char*)malloc(ft_strlen(xs1) + ft_strlen(xs2));
    while (s1[i]!='\0')
    {
        p[i]=xs1[i];
        i++;
    }
    while (s2[j]!= '\0')
    {
        p[i+j]=xs2[j];
        j++;
    }
    return p;
}
