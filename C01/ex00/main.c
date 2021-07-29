#include <stdio.h>
void ft_ft(int *nbr);

int main()
{
	int *nbr;
	int a = 1;
	nbr = &a;
	ft_ft(nbr);
	printf("%d",nbr[0]);
	//ft_ft(nbr);
	return (0);
}