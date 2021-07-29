#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alf;

	alf = 'z';
	while (alf >= 'a')
	{
		write (1, &alf, 1);
		alf--;
	}
}
