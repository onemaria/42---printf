#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char* xb = (unsigned char*)b;
    unsigned char xc = (unsigned char)c;

    i=0;
    while (len>i)
    {
        xb[i]=xc;
        i++;
    }
    return (b);
}
