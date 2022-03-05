#include "ft_printf.h"


static int	ft_cspidu(char format, va_list args)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = ft_printchar(va_arg(args, int));
	if (format == 's')
		length = ft_printstring(va_arg(args, char *));
	if (format == 'p')
		length = ft_printpointer(va_arg(args, void *));
	if (format == 'i' || format == 'd')
		length = ft_printint(va_arg(args, int));
	if (format == 'u')
		length = ft_printuint(va_arg(args, unsigned int));
	if (format == 'x')
		length = ft_printhexalow(va_arg(args, int));
	if (format == 'X')
		length = ft_printhexacap(va_arg(args, int));
	return (length);
}

static int	ft_check(char format)
{
	if (format == 'c' || format == 's' || format == 'p' || format == 'i'
		|| format == 'd' || format == 'u' || format == 'x' || format == 'X')
		return (1);
	else
		return (0);
}

void	ft_formatsplit(char *format, int i, int *length)
{
	if (format[i] != '%')
	{
		write(1, &format[i], 1);
		*length = *length + 1;
	}
	else if (format[i - 1] == '%' && format[i] == '%')
	{
		write(1, "%%", 1);
		if (format[i + 1] == '%')
			i++;
		*length = *length + 1;
	}
}

static int	ft_format(char *format, va_list args)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (ft_check(format[i]))
				length = length + ft_cspidu(format[i], args);
			else
			{
				write(1, &format[i], 1);
				length++;
			}
		}
		else
			ft_formatsplit(format, i, &length);
		i++;
	}
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		length;
	int		i;

	length = 0;
	i = 0;
	va_start(args, format);
	length = ft_format((char *) format, args);
	va_end(args);
	return (length);
}
