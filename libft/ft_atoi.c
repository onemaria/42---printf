#include "libft.h"

static int ft_isspace(int c)
{
    if (c=='\t' || c=='\n' || c=='\v' || c=='\f' || c=='\r' || c==' ')
      return 1;
    else
      return 0;
}

int ft_atoi(const char *(str))
{
    int i;
    int sign;
    int nb;
    
    i=0;
    nb=0;
    while (str[i]!='\0' && ft_isspace(str[i]))
        i++;
    if (str[i]=='-')
      sign = -1;
    else if(str[i]=='+')
      sign = 1;
    i=i+1;
    while (str[i]!='\0')
    {
        if (ft_isdigit(str[i]))
          nb=nb*10 + str[i] - '0';
        else
          break;
        i++;
    }
    return nb*sign;
}
/*
int main(void)
{
    printf("%d", atoi(" ++5 55"));
    printf("%c", '\n');
    printf("%d", ft_atoi(" ++5 55"));
    return 0;
}*/
