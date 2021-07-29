#include <unistd.h>

void	convert(int nbr, char *base);
void	ft_putchar(char c);
int		verify_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	verify;

	verify = verify_base(base);
	if (verify == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
		}
		convert(nbr, base);
	}
}

void	convert(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size] != '\0')
	{
		size++;
	}
	if (size > 1)
	{
		if (nbr >= size || nbr <= size * -1)
		{
			convert(nbr / size, base);
			convert(nbr % size, base);
		}
		else
		{
			if (nbr < 0)
				nbr *= -1;
			ft_putchar(base[nbr]);
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	verify_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
