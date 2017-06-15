#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *str1, const char *str2);

int main(void){
	char str1[5];
	char *str2 = "test";
	char str3[5];
	char *str4 = "Test";
	printf("Homemade: %s, Library: %s\n", ft_strcpy(str3, str4), strcpy(str1, str2));
	return (0);
}
