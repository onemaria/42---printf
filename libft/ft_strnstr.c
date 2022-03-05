#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    i = 0;
    char *xhaystack;
    char *xneedle;

    
    xhaystack = (char *)haystack;  
    xneedle = (char *)needle;
    
    if (ft_strlen(xneedle)==0)
        return (char *)xhaystack;
    if (ft_strlen(xneedle)>ft_strlen(xhaystack))
        return NULL;
    i = len;
    while( xhaystack && len>0)
    {
        if (*xhaystack==*xneedle)
        {
            if (ft_strncmp(xhaystack, xneedle, i))
                return (char*)xhaystack;
        }
        xhaystack++;
        len--;
    }
    return NULL;
}
