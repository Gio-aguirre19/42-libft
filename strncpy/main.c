#include <stdio.h>
#include <string.h>
char *ft_strncpy(char *dest, const char *src, int n);

int main(void){
	char src1[5] = "This";
	char dest1[10];
	char src2[3] = "is";
	char dest2[10];
	char src3[6] = "great";
	char dest3[10];
	char src4[8] = "abcdefg";
	char dest4[10];
	
	ft_strncpy(dest1, src1, 4);
	ft_strncpy(dest2, src2, 2);
	ft_strncpy(dest3, src3, 3);
	ft_strncpy(dest4, src4, 4);

	printf("Homemade: %s\n", dest1);
	printf("Homemade: %s\n", dest2);
	printf("Homemade: %s\n", dest3);
	printf("Homemade: %s\n", dest4);
	return (0);
}
