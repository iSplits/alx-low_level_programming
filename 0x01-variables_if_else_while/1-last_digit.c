#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main : the main function of the code
 *
 * Return: to 0 means success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand () - RAND_MAX / 2;
	x= n % 10;
	if (x > 5)
	{
		printf("The last digit of %d is %d and is greater than 5.\n");
	}
	else if (x == 0)
	{
		printf("The last digit of %d is %d and is 0.\n");
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n");
	}
	return (0);
}
