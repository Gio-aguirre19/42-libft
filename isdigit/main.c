#include <stdio.h>
#include <ctype.h>
int ft_isdigit(unsigned char x);

int main(void){
	printf("Homemade: %d Library: %d \n", ft_isdigit('9'), isdigit('9'));
	printf("Homemade: %d Library: %d \n", ft_isdigit('3'), isdigit('3'));
	printf("Homemade: %d Library: %d \n", ft_isdigit('f'), isdigit('f'));
}
