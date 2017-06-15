#include <stdio.h>
#include <string.h>
int ft_strlen(char *string);

int main(void){
	printf("Homemade: %d, Library: %lu\n", ft_strlen("This is a test"), strlen("This is a test"));
	printf("Homemade: %d, Library: %lu\n", ft_strlen("123 test test}"), strlen("123 test test}"));
	printf("Homemade: %d, Library: %lu\n", ft_strlen("=-} 	|}[sad"), strlen("=-} 	|}[sad"));
	printf("Homemade: %d, Library: %lu\n", ft_strlen(" 	sad 	"), strlen(" 	asd 	"));
	return (0);
}
