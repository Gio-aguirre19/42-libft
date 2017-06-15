#include <ctype.h>
#include <stdio.h>
int ft_toupper(unsigned int x);

int main(void){
	printf("Homemade: %d Library: %d\n", ft_toupper('9'), toupper('9'));
	printf("Homemade: %d Library: %d\n", ft_toupper(90), toupper(90));
	printf("Homemade: %d Library: %d\n", ft_toupper('z'), toupper('z'));
	printf("Homemade: %d Library: %d\n", ft_toupper(-500), toupper(-500));
	printf("Homemade: %d Library: %d\n", ft_toupper('F'), toupper('F'));
}
