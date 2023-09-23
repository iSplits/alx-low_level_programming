#include <stdio.h>
/**
 * main - the main function
 *
 * Return: to 0 means success
 */
int main(void)
{
		printf("Size of a char: %d byte(s)\n", sizeof(char));
		printf("Size of an int: %d byte(s)\n", sizeof(int));
		printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %lld byte(s)\n", sizeof(long long int));
		printf("Size of float: %f byte(s)\n", sizeof(float));
		return(0);
}
