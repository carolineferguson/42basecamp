#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		aux;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
	for(int i = 0; i < size; i++)
	{
		printf("%d,", tab[i]); 
	}
}
