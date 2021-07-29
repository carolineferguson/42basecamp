#include <stdio.h>
int ft_str_is_printable(char *str);

int main()
{
	char *str;
	str = "\n";
	int a = ft_str_is_printable(str);
	printf("%d",a);
}