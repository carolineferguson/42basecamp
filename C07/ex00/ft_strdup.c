#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		index;

	size = 0;
	index = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	dest = malloc(size * sizeof(*dest));
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
