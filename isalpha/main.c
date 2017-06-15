#include <ctype.h>
#include <stdio.h>
int ft_isalpha(unsigned char x);

int main(void){
	printf("Homepage: %d Library: %d\n", ft_isalpha('a'), isalpha('a'));
	printf("Homepage: %d Library: %d\n", ft_isalpha('Z'), isalpha('Z'));
	printf("Homepage: %d Library: %d\n", ft_isalpha(120), isalpha(120));
	printf("Homepage: %d Library: %d\n", ft_isalpha(5), isalpha(5));
}
