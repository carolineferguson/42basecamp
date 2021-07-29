#include <unistd.h>

void	print_solution(int matrix[4][4]);
void	ft_putnbr(int nbr);
int		ft_atoi(char *str);
void	ft_putchar(char c);	


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int		index;
	int		num;
	int		sign;

	index = 0;
	num = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		index++;
	}
	while (str[index] != '\0')
	{
		if ('0' <= str[index] && str[index] <= '9')
		{
			num = num * 10 + (str[index] - 48);
			index++;
		}
		else
		{
			return (num * sign);
		}
	}
	return (num * sign);
}

void	ft_putnbr(int nbr)
{
	int		get_digit;
	int		correction;
	char	c;

	correction = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		if (nb == -2147483648)
		{
			nb = nb + 1;
			nb = nb * (-1);
			correction = 1;
		}
		else
			nb = nb * (-1);
	}
	if (nb > 9)
	{
		get_digit = nb / 10;
		ft_putnbr(get_digit);
	}
	nb = (nb % 10) + correction;
	c = nb + '0';
	write (1, &c, 1);
}

void	print_solution(int matrix[4][4])
{
	int i, j;

	i = j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			printf("%d ", matrix[i][j]);
			j++;
		}
		j = 0;
		i++;
		printf("\n");
	}
	printf("\n");
}
