#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_printf(const char *format, ...);
int		ft_printstring(char *s);
int		ft_printchar(int c);
int		ft_printint(int n);
int		ft_printuint(unsigned int n);
int		ft_printpointer(void *p);
int		ft_printhexacap(unsigned int n);
int		ft_printhexalow(unsigned int n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putunbr_fd(unsigned int n, int fd);
size_t	ft_strlen(const char *s);

#endif