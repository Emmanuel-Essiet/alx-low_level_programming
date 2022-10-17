#include <stdio.h>

/**
*main - this is the main function
*Description:this is the entry point of the program
*
*Return:return 0 if successful.
*/
int main(void)
{
	printf("size of char is %Id bytes\n", sizeof(char));
	printf("size of int is %Id bytes\n", sizeof(int));
	printf("size of long int is %Id bytes\n", sizeof(long int));
	printf("size of long long int is %Id bytes\n", sizeof(long long int));
	printf("size of float is %Id bytes\n", sizeof(float));
	return (0);
}
