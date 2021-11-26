#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
