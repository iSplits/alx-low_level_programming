#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase followed by a new line.
 *
 * Return: to 0 means success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
