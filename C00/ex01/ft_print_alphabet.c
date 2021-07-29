#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alf;

	alf = 'a';
	while (alf <= 'z')
	{
		write(1, &alf, 1);
		alf++;
	}
}
