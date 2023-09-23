#include <unistd.h>
/**
 * main - the main function
 *
 * Return: to 1 means success
 * if,
 * return to 0 mean fail
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
