int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0 || nb == 0)
	{
		return (0);
	}
	else
	{
		while (power > 0)
		{
			res = nb * res;
			power--;
		}
		return (res);
	}
}
