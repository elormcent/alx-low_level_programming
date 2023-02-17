#include <stdio.h>
/**
 * main - entry point of the application
 * Return: returns 0 for success
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(48 + c);
	}
	putchar('\n');

	return (0);
}
