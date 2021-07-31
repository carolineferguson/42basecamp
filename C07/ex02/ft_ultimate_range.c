#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
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
	if (!res)
	{
		return (-1);
	}
	*range = res;
	return (index);
}
