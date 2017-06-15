#include <ctype.h>
#include <stdio.h>
int ft_isprint(unsigned char x);

// Change string using %s/something/somethingelse/g in command line

int main(void){
	printf("Homemade: %d Library: %d\n", ft_isprint('9'), isprint('9'));
	printf("Homemade: %d Library: %d\n", ft_isprint(90), isprint(90));
	printf("Homemade: %d Library: %d\n", ft_isprint('z'), isprint('z'));
	printf("Homemade: %d Library: %d\n", ft_isprint(' '), isprint(' '));
	printf("Homemade: %d Library: %d\n", ft_isprint('F'), isprint('F'));
}
