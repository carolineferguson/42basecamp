#include <stdio.h>
#include <bsd/string.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int main()
{
	char dest[] = "asdgs";
	char src[] = "edddeddf";
  
	unsigned int n = ft_strlcpy(dest,src,5);  
	printf("%d\n", n); 
	unsigned int a = strlcpy(dest,src,5); 
	printf("%d\n", a);  
	return (0);
}