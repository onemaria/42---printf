#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t j;
    size_t i;
	
    i = 0;
    j = 0;
	if (ft_strlen(dst) >= size)
		return (size+ft_strlen(src));
	
    while (dst[i] && size>0)
	{
        i++;
		size --;
	}

    while(j+i+1<size && src[j])
    {
        dst[j + i] = src[j];
        j++;
    }
    dst[j + i] = '\0';

	if (size > ft_strlen(dst))
	    return ft_strlen(src)+size;
	else
		return ft_strlen(src)+ft_strlen(dst);
}
