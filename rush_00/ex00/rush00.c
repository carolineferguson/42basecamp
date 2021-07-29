#include <unistd.h>
void	ft_putchar(char buf);
void	head(int ref);
void	body(int ref);
void	footer(int ref);

void	rush(int x, int y)
{
	int	lin;

	lin = 1;
	while (lin <= y)
	{
		if (lin == 1)
		{
			head(x);
		}
		else if ((lin > 1) && (lin < y))
		{
			body(x);
		}
		else if (lin == y)
		{
			footer(x);
		}
		lin++;
	}
}

//This function will write only the first line
void	head(int ref)
{
	int	col;

	col = 1;
	while (col <= ref)
	{
		if (col == 1)
		{
			ft_putchar('o');
		}
		else if ((col > 1) && (col < ref))
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('o');
		}
		col++;
	}
	ft_putchar('\n');
}

//This function will write the sides, and leave a free space inside
void	body(int ref)
{
	int	col;

	col = 1;
	while (col <= ref)
	{
		if (col == 1)
		{
			ft_putchar('|');
		}
		else if ((col > 1) && (col < ref))
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('|');
		}
		col++;
	}
	ft_putchar('\n');
}

//This function will write the last line of the output
void	footer(int ref)
{
	int	col;

	col = 1;
	while (col <= ref)
	{
		if (col == 1)
		{
			ft_putchar('o');
		}
		else if ((col > 1) && (col < ref))
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar('o');
		}
		col++;
	}
	ft_putchar('\n');
}
