#include <unistd.h>
int	main(int argc, char *argv[])
{
	int		counter;
	char	n;
	char	nl;

	counter = 0;
	nl = '\n';
	while (argv[0][counter] != '\0')
	{
		n = argv[0][counter];
		write (1, &n, 1);
		counter++;
	}
	write(1, &nl, 1);
	return (argc);
}
