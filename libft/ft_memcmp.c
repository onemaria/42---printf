#include "libft.h"

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
    
    const unsigned char *xs1=s1;
    const unsigned char *xs2=s2;
    size_t i;
    i=0;
    if (n==0)
        return 0;
    while(n>0)
    {
        if (xs1[i]!=xs2[i])
        {
            if (xs1[i]-xs2[i] > 0)
                return 1;
            else return -1;
        }
        i++;
        n--;
    }
    return 0;
}
