#include "libft.h"

static int trim_start(char const *s1, char const *set)
{
    int i;
    
    i = 0;
    while(s1[i]!='\0')
    {
        if (ft_strchr(set, s1[i]) == NULL)
            return i;
        i++;
    }
    return 0;    
}

static int trim_end(char const *s1, char const *set)
{
 
    int i;
    
    i = 0;
    i = ft_strlen(s1);
    while(i>=0)
    {
        if (ft_strchr(set, s1[i]) == NULL)
            return i;
        i--;
    }
    return 0;    
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *p;
    size_t i;
    int start;
    int end;
    
    i = 0;
	if (s1 == NULL)
		return (NULL);
    end = trim_end(s1, set);
    start = trim_start(s1, set);
    p = (char*)malloc(sizeof(char)*i);
    if (!p)
        return NULL;
    while(start<=end)
    {
        p[i]=s1[start];
        start++;
        i++;  
    }
    return (p);
}
