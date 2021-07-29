int	ft_sqrt(int nb)
{
	int	power;

	power = 1;
	if (nb < 0 || nb == 0 || nb == 2)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (power * power < nb && power <= 46340)
	{
		power++;
	}
	if ((nb % power) == 0)
	{
		return (power);
	}
	return (0);
}
