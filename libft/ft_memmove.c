#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *xdest=dest;
    const char *xsrc=src;
    size_t i;

    if (dest == 0 && src == 0)
        return (0);
    i = 0;
    if (n==0)
        return (void*)dest; 
    if(dest<=src)
    {
        while(n>0)
        {
            xdest[i]=xsrc[i];
            i++;
            n--;
        }
        return (void*)dest;    
    }
    while(n>i)
    {
        xdest[i]=xsrc[i];
        i++;
    }
    return (void*)dest;
}
