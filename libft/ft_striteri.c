#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;

    i = 0;
    while(s[i])
    {
        f(i, s+i);
        i++;
    }
}

void ft_addone(unsigned int i, char *c)
{
     while(c[i])
    {
        f(i, c+i);
        i--;
    }
}
#include <stdio.h>
int main(void)
{
    char str[]="abcde";
    char *s;
    size_t i=0;
    while(s[i])
    {
        printf("%d \n", ft_striteri(str, ft_addone(i, str)));
        i++;
    }
    return 0;
}
