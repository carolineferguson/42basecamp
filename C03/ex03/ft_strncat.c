unsigned int	ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
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
