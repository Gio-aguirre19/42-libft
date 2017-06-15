#include <ctype.h>
#include <stdio.h>
int ft_isascii(unsigned char x);

// Regex search %s/something/somethingelse/g

int main(void){
	printf("Homemade: %d Library: %d\n", ft_isascii('9'), isascii('9'));
	printf("Homemade: %d Library: %d\n", ft_isascii(90), isascii(90));
	printf("Homemade: %d Library: %d\n", ft_isascii('z'), isascii('z'));
	printf("Homemade: %d Library: %d\n", ft_isascii(500), isascii(500));
	printf("Homemade: %d Library: %d\n", ft_isascii('F'), isascii('F'));
}
