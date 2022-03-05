#include "ft_printf.h"

static int	ft_decimaltohex(unsigned int n, int *len)
{
	int	length;

	length = *len;
	if (n / 16)
		ft_decimaltohex(n / 16, &length);
	if (n % 16 >= 10)
		ft_putchar_fd(n % 16 + 'A' - 10, 1);
	else
		ft_putchar_fd(n % 16 + '0', 1);
	length++;
	*len = length;
	return (length);
}

int	ft_printhexacap(unsigned int n)
{
	int	length;
	int	len;

	len = 0;
	length = ft_decimaltohex(n, &len);
	return (length);
}

