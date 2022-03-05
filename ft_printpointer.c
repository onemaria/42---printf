#include "ft_printf.h"

static int	ft_decimaltohex(unsigned long long n, int *len)
{
	int	length;

	length = *len;
	if (n / 16)
		ft_decimaltohex(n / 16, &length);
	if (n % 16 >= 10)
		ft_putchar_fd(n % 16 + 'a' - 10, 1);
	else
		ft_putchar_fd(n % 16 + '0', 1);
	length++;
	*len = length;
	return (length);
}

static int	ft_printhexalowpointer(unsigned long long n)
{
	int	length;
	int	len;

	len = 0;
	length = ft_decimaltohex(n, &len);
	return (length);
}

int	ft_printpointer(void *p)
{
	int	i;

	if (!p)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	i = ft_printhexalowpointer((unsigned long long)p) + 2;
	return (i);
}
