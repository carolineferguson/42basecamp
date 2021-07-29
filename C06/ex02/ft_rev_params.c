#include <unistd.h>
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	counter;

	argc = argc - 1;
	while (0 < argc)
	{
		counter = 0;
		while (argv[argc][counter] != '\0')
		{
			ft_putchar(argv[argc][counter]);
			counter++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
