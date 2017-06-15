#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, const char *srci, int n);

int main(void){
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	ft_strncat(dest, src, 9);

	printf("Final destination string : |%s|", dest);
	return (0);
}
