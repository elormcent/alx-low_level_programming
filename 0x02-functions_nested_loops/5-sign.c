#include"main.h"

/**
 * print_sign - check numbers
 * @n : parameter or arguments to be checked
 * Return:0 or 1 or negative 1 base on condition
 */

int print_sign(int n)
{
	int condition_return;

	if (n >= 1)
	{
		condition_return = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		condition_return = 0;
		_putchar('0');
	}
	else
	{
		condition_return = -1;
		_putchar('-');
	}

	return (condition_return);
}
