int	check_sign(char *str);
int	ft_atoi(char *str)
{
	int		index;
	int		num;
	int		sign;

	index = 0;
	num = 0;
	sign = check_sign(str);
	while (str[index] != '\0')
	{
		while (0 < str[index] && str[index] < 33)
			index++;
		while (str[index] == '-' || str[index] == '+')
			index++;
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

int	check_sign(char *str)
{
	int	sign;
	int	index;

	sign = 1;
	index = 0;
	while (str[index] == '-' || str[index] == '+'
		|| (0 < str[index] && str[index] < 33))
	{
		if (str[index] == '-')
		{
			sign = sign * -1;
		}
		if (str[index] == '+')
		{
			sign = sign * 1;
		}
		index++;
	}
	return (sign);
}
