#include <unistd.h>
void	loop(char num1char1, char num1char2, char num2char1, char num2char2);
void	comb(char num1char1, char num1char2, char num2char1, char num2char2);

void	ft_print_comb2(void)
{
	char	num1char1;
	char	num1char2;
	char	num2char1;
	char	num2char2;

	num1char1 = '0';
	num1char2 = '0';
	num2char1 = '0';
	num2char2 = '0';
	loop(num1char1, num1char2, num2char1, num2char2);
}

//Function to loop through and increment them
void	loop(char num1char1, char num1char2, char num2char1, char num2char2)
{
	while (num1char1 <= '9')
	{
		num1char2 = '0';
		while (num1char2 <= '9')
		{
			num2char1 = '0';
			while (num2char1 <= '9')
			{
				num2char2 = '0';
				while (num2char2 <= '9')
				{
					comb(num1char1, num1char2, num2char1, num2char2);
					num2char2++;
				}
				num2char1++;
			}
			num1char2++;
		}
		num1char1++;
	}
}

//Function to check if the numbers are in ascending order and writing them
void	comb(char num1char1, char num1char2, char num2char1, char num2char2)
{
	if (num1char1 <= num2char1 && num1char2 < num2char2)
	{
		write(1, &num1char1, 1);
		write(1, &num1char2, 1);
		write(1, " ", 1);
		write(1, &num2char1, 1);
		write(1, &num2char2, 1);
		write(1, ", ", 2);
	}
}
