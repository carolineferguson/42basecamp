unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0' )
	{
		index++;
	}
	return (index);
}
