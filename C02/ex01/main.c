#include <stdio.h>
#include <string.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);
int main()
{

	char str1[] = "ddd";
	char str2[] = "CD";

	printf("%s\n", str1);    
	printf("%s\n",ft_strncpy(str1, str2,3));  
   	printf ( "%s \n",strncpy (str1,str2,3)) ;
   return 0;
}