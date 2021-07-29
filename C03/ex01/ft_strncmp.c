int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((*s1 != 0 && *s1 == *s2) && i < n - 1)
	{
		i++;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
