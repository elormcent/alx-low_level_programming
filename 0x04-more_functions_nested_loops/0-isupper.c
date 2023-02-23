#include "main.h"

/**
 * _isupper - Check if a letter is in uppercase or not
 * @x: The number to be validated
 * Return: 1 for uppercase letter or 0 for any else
 */

int _isupper(int x)

{

	if (x >= 'A' && x <= 'Z')
	{
	return (1);
	}
	return (0);
}
