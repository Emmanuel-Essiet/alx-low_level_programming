#include <stdio.h>

/**
*main - this is the main function
*Description:this is the entry point of the program
*
*Return:return 0 if successful.
*/
int main(void)
{
	printf("size of a char: %Id byte(s)\n", sizeof(char));
	printf("size of an int: %Id byte(s)\n", sizeof(int));
	printf("size of a long int: %Id byte(s)\n", sizeof(long int));
	printf("size of a long long int: %Id byte(s)\n", sizeof(long long int));
	printf("size of a float: %Id byte(s)\n", sizeof(float));
	return (0);
}
