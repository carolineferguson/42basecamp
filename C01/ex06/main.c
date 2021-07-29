#include <stdio.h>
int ft_strlen(char *str);

int main(void)
{
	char	*str;
	int	a = 0;

	str = "abcdefg";
	a = ft_strlen(str);
	printf("%d",a);
	return (0);
}