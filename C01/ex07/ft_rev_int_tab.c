#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		aux;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
	int cont = 0;
	while(cont<size)
	{
		printf("%d",tab[cont]);
		cont++;
	}
}
