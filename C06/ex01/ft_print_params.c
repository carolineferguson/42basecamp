#include <unistd.h>
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	counter;
	int	i;

	i = 1;
	while (i < argc)
	{
		counter = 0;
		while (argv[i][counter] != '\0')
		{
			ft_putchar(argv[i][counter]);
			counter++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
