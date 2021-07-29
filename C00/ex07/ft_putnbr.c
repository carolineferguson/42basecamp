#include <unistd.h>
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char	n;

	if (nb == -2147483648)
	{	
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		n = (nb + '0');
		write(1, &n, 1);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
