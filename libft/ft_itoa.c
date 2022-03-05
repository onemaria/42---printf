#include "libft.h"

static int ft_sizeofn(int n)
{
    
    int i;
    
    if (n < 0)
        i = 1;
    else 
        i = 0;
    n = abs(n);
    while(n>0)
    {
        n = n % 10;
        n=n/10;
        i++;
    }
    return i;
}

static void    ft_getdigits(int n)
{
    int     i;
    int     d;
    int     a[10];
    char    x;
    i = 0;
    while (n != 0)
    {
        d = n % 10;
        a[i] = d;
        i++;
        n = n / 10;
    }
    i = i - 1;
    while (i >= 0)
    {
        x = a[i] + '0';
        write(1, &x, 1);
        i--;
    }
}

char *ft_itoa(int n)
{
    char *p;
    
    if (n == -2147483648)
		return (ft_strdup("-2147483648"));
    p=(char*)malloc(ft_sizeofn(n)+1);
    
    if (n > -2147483648 && n < 0)
    {
        p[0] = '-';
        n = n * (-1);
        ft_getdigits(n);
    }
    if (n >= 0 && n < 10)
	{
		p[0] = n + '0';
		p[1] = '\0';
	}
    if (n > 0)
        ft_getdigits(n);
    return p;  
}
