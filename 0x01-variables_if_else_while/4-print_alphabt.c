#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints all the alphabet except q and e.
 *
 * Return: to 0 means success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
