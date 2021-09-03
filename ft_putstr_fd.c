#include "libft.h"
#include <unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (*(s + len))
		len++;
	return (write(fd, s, len));
}
