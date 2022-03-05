#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *xs = (unsigned char *)s;    
    unsigned char xc=c;

    while(n>0)
    {
        if (*xs==xc)
            return(unsigned char*)xs;
        xs++;
        n--;
    }
    return NULL;
}
