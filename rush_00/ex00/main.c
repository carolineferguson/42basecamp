#include <stdio.h>
void	rush(int y, int x);
int		ft_atoi(char *str);


int	main(int argc, char *argv[])
{
	int	y;
	int	x;

	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);

	printf("%s",argv[0]);
	return (argc);
}

/*Function to convert string to int. The number is found by looping through 
the string until it is null or when it is not a numeric character.*/
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
