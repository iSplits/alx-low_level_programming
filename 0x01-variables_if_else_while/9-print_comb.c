#include <stdio.h>

/**
 * main - Prints all possible combination of single-digit numbers.
 *
 * Return: to 0 means success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
