#include <stdio.h>

/**
 * main - Prints all the lowercase alphabet reversed.
 *
 * Return: to 0 means succes
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
