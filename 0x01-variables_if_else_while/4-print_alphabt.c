#include <stdio.h>
/**
 * main - entry point of the application
 * Return: returns 0 for success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
