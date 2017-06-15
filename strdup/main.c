#include <stdio.h>
#include <string.h>
char *ft_strdup(char *s1);

int main(void){

	char *str0 = "Red Friday";
	char *str1 = ft_strdup(str0);
	

	printf("Homemade: %s, Library: %s\n", str1, strdup(str0));
/*	printf("Homemade: %s, Library: %s\n", ft_strdup("123 test test}"), strdup("123 test test}"));
	printf("Homemade: %s, Library: %s\n", ft_strdup("=-} 	|}[sad"), strdup("=-} 	|}[sad"));
	printf("Homemade: %s, Library: %s\n", ft_strdup(" 	sad 	"), strdup(" 	asd 	"));*/
	return (0);
}
