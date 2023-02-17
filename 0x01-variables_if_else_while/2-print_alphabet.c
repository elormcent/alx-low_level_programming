#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the application
 * Return: returns 0 for success
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
