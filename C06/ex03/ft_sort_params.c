#include <unistd.h>
void	print_params(int argc, char *argv[]);
void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	char	*aux;
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = aux;
				i = 0;
			}
			i++;
		}
		print_params(argc, argv);
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (*s1 - *s2);
}

void	print_params(int argc, char *argv[])
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
}
