#include "main.h"

/**
 * main - Entry point
 *
 * Return: returns 0 for success
 */

int main(void)
{
	char a_word[] = " _putchar";
	int l;

	for (l = 1; l <= 8; l++)
	_putchar(a_word[l]);
	_putchar('\n');

	return (0);
}
