#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd)
{
	char	c;

	if (n == 4294967295)
		write(1, "4294967295", 10);
	else if (n > 9)
	{
		ft_putunbr_fd(n / 10, fd);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}
