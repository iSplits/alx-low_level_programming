#include <stdio.h>

/**
 * main - Prints the lowercase alphabet then upper case in new line.
 *
 * Return:has to be 0 to be a Success
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
