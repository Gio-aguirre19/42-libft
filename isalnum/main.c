#include <ctype.h>
#include <stdio.h>
int ft_isalnum( unsigned char x );

int main(void){
 printf("Homemade: %d Library: %d\n", ft_isalnum('0'), isalnum('0'));
 printf("Homemade: %d Library: %d\n", ft_isalnum(60), isalnum(60));
 printf("Homemade: %d Library: %d\n", ft_isalnum('B'), isalnum('B'));
 printf("Homemade: %d Library: %d\n", ft_isalnum(120), isalnum(120));
 printf("Homemade: %d Library: %d\n", ft_isalnum('9'), isalnum('9'));
 printf("Homemade: %d Library: %d\n", ft_isalnum('x'), isalnum('x'));
}
