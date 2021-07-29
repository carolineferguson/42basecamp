#include <stdio.h>
void ft_swap(int *a, int *b);
int main()
{
	int ta = 1;
	int tb = 2;
	int *a = &ta;
	int *b = &tb;
	printf("%p \n",a);
	printf("%p \n",b);
	ft_swap(a,b);
	/*int aux;
	aux = *a;
	*a = *b;
	*b = aux;*/
	printf("%p \n",a);
	printf("%p \n",b); 
}