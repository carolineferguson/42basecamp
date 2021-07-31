#include <stdlib.h>
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
int		len(char **str, int size, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		index;

	index = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		str = 0;
		return (str);
	}
	str = malloc(len(strs, size, sep) * sizeof(char));
	while (index < size)
	{
		ft_strcat(str, strs[index]);
		if (index < size - 1)
			ft_strcat(str, sep);
		index++;
	}
	return (str);
}

int	len(char **strs, int size, char *sep)
{
	int	index;
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		index = 0;
		while (strs[index] != '\0' )
		{
			index++;
		}
		len = len + index;
		i++;
	}
	len = 1 + len + (size - 1) * ft_strlen(sep);
	return (len);
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
