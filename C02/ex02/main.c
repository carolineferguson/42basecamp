#include <stdio.h>
int ft_str_is_alpha(char *str);
int main()
{
	char *str;
	str = "Dws";
	int a = ft_str_is_alpha(str);
	printf("%d",a);
	return (0);
}
