#include"main.h"

/**
 * print_alphabet_x10 - function that prints alphabet a to z 10 times on a new line each
 */

void print_alphabet_x10(void)
{
	int line, ch;

	while (line < 10)
	{
		line++;
		for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
		_putchar('\n');
	}
}
