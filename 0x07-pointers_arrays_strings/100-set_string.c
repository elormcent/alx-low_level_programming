#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: variable of type pointer
 * @to: char
 * Return: Always 0 (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
