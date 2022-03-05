#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *xdst;
    const char *xsrc;

    xdst =(char *)dst;
    xsrc = (const char *)src;
    if (dst == 0 && src == 0)
        return (0);
    i=0;
    while(n>i)
    {
        xdst[i] = xsrc[i];
        i++;
    }
    return (dst);
}
