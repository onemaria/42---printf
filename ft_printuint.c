#include "ft_printf.h"

int	ft_printuint(unsigned int n)
{
	unsigned int	length;
	unsigned int	nb;

	ft_putunbr_fd(n, 1);
	nb = n;
	length = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	if (n == 0)
		return (1);
	return (length);
}
