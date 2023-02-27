#include "main.h"
#include <stddef.h>

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: pointer to an int.
 * @b: pointer to an int.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int temp;

	if (a != NULL && b != NULL)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}
