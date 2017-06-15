#include <ctype.h>
#include <stdio.h>
int ft_tolower(unsigned int x);

int main(void){
	printf("Homemade: %d Library: %d\n", ft_tolower('9'), tolower('9'));
	printf("Homemade: %d Library: %d\n", ft_tolower(90), tolower(90));
	printf("Homemade: %d Library: %d\n", ft_tolower('z'), tolower('z'));
	printf("Homemade: %d Library: %d\n", ft_tolower(-500), tolower(-500));
	printf("Homemade: %d Library: %d\n", ft_tolower('F'), tolower('F'));
}
