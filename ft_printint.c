#include "ft_printf.h"

int	ft_printint(int n)
{
	int				length;
	unsigned int	nb;

	ft_putnbr_fd(n, 1);
	nb = n;
	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nb = -n;
		length++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}
