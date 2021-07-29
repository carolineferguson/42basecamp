#include<unistd.h>

void	ft_putchar(char buf)
{
	write(1, &buf, 1);
}
