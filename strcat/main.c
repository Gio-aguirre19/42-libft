#include <stdio.h>
#include <string.h>
char *ft_strcat(char *dest, const char *src);

int main(void){
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	ft_strcat(dest, src);

	printf("Final destination string : |%s|", dest);
	return (0);
}
