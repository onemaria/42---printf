#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;
   	char *temp;
    size_t len;

    i = 0;
    len = ft_strlen(s);
    temp = NULL;
    if (c == 0)
		return ((char *)&s[len]);
    while(len>0)
    {
        if (s[i]==c)
            temp = (char*)&s[i];
        i++;
        len --;
    }
    return temp;
}
