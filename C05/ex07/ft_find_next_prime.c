int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb)
{
	int	aux;

	aux = nb;
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	if (nb <= 2)
	{
		return (2);
	}
	while (aux < nb * 2)
	{
		if (ft_is_prime(aux) == 1)
		{
			return (aux);
		}
		aux++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
	{
		return (0);
	}
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
