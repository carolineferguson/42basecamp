char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
				&& str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
		{
			i++;
			word++;
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
		if (str[i - word] >= 'a' && str[i - word] <= 'z')
		{	
			str[i - word] = str[i - word] - 32;
		}	
		word = 0;
		i++;
	}
	return (str);
}
