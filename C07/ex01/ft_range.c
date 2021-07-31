#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*res;
	int	index;

	index = 0;
	if (min >= max)
	{
		res = NULL;
		return (0);
	}
	res = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		res[index] = min;
		min++;
		index++;
	}
	return (res);
}
