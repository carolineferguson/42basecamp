#include <unistd.h>

void	ft_is_negative(int n)
{
	char	N;
	char	P;

	N = 78;
	P = 80;
	if (n >= 0)
	{
		write(1, &P, 1);
	}
	else
	{
		write(1, &N, 1);
	}
}
