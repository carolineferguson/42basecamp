int	ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_src;
	int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	while (i < size_src)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0' )
	{
		index++;
	}
	return (index);
}
