#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i; 
    size_t l;
    
    l = ft_strlen(src);
    i = 0;
    while (src[i] && l>0)
    {
        i++;
        l--;
    }
    if (src[i]!='\0')
        return 0;
    i = 0;
    if (dstsize>0)
    { 
        while (src[i] != '\0' && i < dstsize - 1) 
        {
            dst[i] = src[i]; 
            i++; 
        }
    }
    if (dstsize>0)
        dst[i] = '\0'; 
    return ft_strlen(src); 
}
