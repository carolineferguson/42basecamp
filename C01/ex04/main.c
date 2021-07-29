#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);
int main()
{
	int ta = 10;
	int tb = 5;
	int *a = &ta;
	int *b = &tb;
	ft_ultimate_div_mod(a,b);
	printf("%d",ta);
	printf("%d",tb);
}