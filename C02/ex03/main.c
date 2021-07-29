#include <stdio.h>
int ft_str_is_numeric(char *str);
int main()
{
	char *str;
	str = "3d";
	int a = ft_str_is_numeric(str);
	printf("%d",a);
	return (0);
}