#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, char *src);
int main()
{

	char str1[] = "AB";
	char str2[] = "Ca";

	printf("%s\n", str1);   
	printf("%s\n", ft_strcpy(str1, str2));
	printf("%s\n", strcpy(str1, str2));    

	return (0);
}
