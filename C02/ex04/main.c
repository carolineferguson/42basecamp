#include <stdio.h>
int ft_str_is_lowercase(char *str);

int main()
{
	char *str;
	str = "aa";
	int a = ft_str_is_lowercase(str);
	printf("%d",a);
	return (0);
}