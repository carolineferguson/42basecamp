#include <stdio.h>
int ft_str_is_uppercase(char *str);

int main()
{
	char *str;
	str = "Aa";
	int a = ft_str_is_uppercase(str);
	printf("%d",a);
	return (0);
}