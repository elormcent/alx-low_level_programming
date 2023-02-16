#include<unistd.h>
/**
 * main - point of entry
 * Return: 1 is returned as a standard error.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
