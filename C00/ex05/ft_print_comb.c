#include <unistd.h>

void	return_number(char first, char second, char third);

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '9')
	{
		second = first + 1;
		while (second <= '9')
		{
			third = second + 1;
			while (third <= '9')
			{
				return_number(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}

void	return_number(char first, char second, char third)
{
	char	comma;
	char	space;

	comma = 44;
	space = 32;
	if (first != second && second != third && first != third)
	{
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, &third, 1);
		write(1, &comma, 1);
		write(1,&space,1);
	}
}
