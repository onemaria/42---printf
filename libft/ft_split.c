#include "libft.h"

static int ft_findsplit(const char *s, char c)
{
    size_t i;
    size_t k;

    k = 0;
    i = 0;
    while(s[i]!='\0')
    {
        while (s[i]==c)
            i++;
        if (s[i] != '\0')
            k++;
        while (s[i] && s[i]!=c)
            i++;
    }
    return (k);    
}
static int ft_firstchar(const char *s, int c)
{
    size_t i;
        
    i = 0;
    while(s[i] && s[i]==c)
        i++;
    return i;
}
static int ft_secondchar(const char *s, int c)
{
    size_t j;
        
    j = 0;
    while(s[j] && s[j]!=c)
        j++;
    return j;
}

char **ft_split(char const *s, char c)
{
    char **doublep;
    size_t i;
    size_t k;
    size_t j;
    
    if (!s || !c)
        return NULL;
    k = ft_findsplit(s, c);
    doublep=(char**)malloc(sizeof(char)*k + 1);
    if (!doublep)
        return NULL;
        
    i = 0;
    j = 0;
    while(k > 0)
    {
        i = ft_firstchar(&s[j], c);
        j = ft_secondchar(&s[i], c);
        if (i!=j)
        {
            doublep[k]=ft_substr(s, i, j);
        }
        k--;
    }
    doublep[k+1] = NULL;
    i = 0;
    return doublep;
}
/*
int main(void)
{
    char s[]="a123a456a1a";
    char *p;
    size_t i=0;
    ft_split(s, 'a');
    return 0;
    
}
*/
